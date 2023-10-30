#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void display_elf_info(Elf64_Ehdr *elf_header);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    const char *filename = argv[1];
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        exit(98);
    }

    Elf64_Ehdr elf_header;
    if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header)) {
        fprintf(stderr, "Error reading ELF header\n");
        close(fd);
        exit(98);
    }

    if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0) {
        fprintf(stderr, "This is not an ELF file\n");
        close(fd);
        exit(98);
    }

    display_elf_info(&elf_header);

    close(fd);
    return (0);
}

void display_elf_info(Elf64_Ehdr *elf_header) {
    printf("Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", elf_header->e_ident[i]);
    }
    printf("\n");

    printf("Class:                             ");
    switch (elf_header->e_ident[EI_CLASS]) {
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("Unknown\n");
    }

    printf("Data:                              ");
    switch (elf_header->e_ident[EI_DATA]) {
        case ELFDATA2LSB:
            printf("2's complement, little-endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big-endian\n");
            break;
        default:
            printf("Unknown\n");
    }

    printf("Version:                           %d (current)\n", elf_header->e_ident[EI_VERSION]);

    printf("OS/ABI:                            ");
    switch (elf_header->e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("UNIX - HP-UX\n");
            break;
        case ELFOSABI_STANDALONE:
            printf("Standalone App\n");
            break;
        default:
            printf("Unknown\n");
    }

    printf("ABI Version:                       %d\n", elf_header->e_ident[EI_ABIVERSION]);

    printf("Type:                              ");
    switch (elf_header->e_type) {
        case ET_NONE:
            printf("NONE (Unknown)\n");
            break;
        case ET_REL:
            printf("REL (Relocatable file)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        case ET_CORE:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("Unknown\n");
    }

    printf("Entry point address:               0x%lx\n", (unsigned long)elf_header->e_entry);
}

