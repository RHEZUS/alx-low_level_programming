#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void check_argc(int argc) {
    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
}

void check_error(ssize_t check, char *file, int fd_from, int fd_to, int exit_code, const char *message) {
    if (check == -1) {
        dprintf(STDERR_FILENO, "Error: %s %s\n", message, file);
        if (fd_from != -1) close(fd_from);
        if (fd_to != -1) close(fd_to);
        exit(exit_code);
    }
}

int main(int argc, char *argv[]) {
    int fd_from, fd_to;
    ssize_t lenr, lenw;
    char buffer[1024];
    mode_t file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

    check_argc(argc);
    
    fd_from = open(argv[1], O_RDONLY);
    check_error(fd_from, argv[1], -1, -1, 98, "Can't read from file");

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
    check_error(fd_to, argv[2], fd_from, -1, 99, "Can't write to file");

    while ((lenr = read(fd_from, buffer, 1024)) > 0) {
        check_error(lenr, argv[1], fd_from, fd_to, 98, "Can't read from file");
        
        lenw = write(fd_to, buffer, lenr);
        check_error(lenw, argv[2], fd_from, fd_to, 99, "Can't write to file");
    }

    close(fd_to);
    close(fd_from);

    return 0;
}
