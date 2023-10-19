extern	printf		; the C function, to be called
section .data
    hello db "Hello, Holberton",0 ; Define the string to be printed
    format db "%s",10,0           ; Define the format string with a newline character

section .text
    global main                   ; Entry point for the program
    extern printf                ; Declare the printf function from the C library

main:
    push rbp                      ; Save the base pointer
    mov rdi, format               ; Load the address of the format string into rdi
    mov rsi, hello                ; Load the address of the hello string into rsi
    call printf                   ; Call the printf function to print the formatted string
    pop rbp                       ; Restore the base pointer
    ret                           ; Return from the main function

