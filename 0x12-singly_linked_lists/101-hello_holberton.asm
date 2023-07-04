; hello.asm
; 64-bit program that prints Hello, Holberton, followed by a new line

    global main ; make main visible to the linker
    extern printf ; declare printf as an external function

    section .data ; data section
msg: db "Hello, Holberton", 10, 0 ; message to print, followed by newline and null terminator

    section .text ; code section
main: ; main function
    push rbp ; save the base pointer
    mov rbp, rsp ; set the base pointer to the current stack pointer
    sub rsp, 16 ; allocate 16 bytes on the stack for printf argument
    lea rdi, [rel msg] ; set the first argument (format string) to msg
    mov [rsp], rdi ; store the first argument on the stack
    mov rax, 0 ; set the number of floating point arguments to 0
    call printf wrt ..plt ; call printf
    add rsp, 16 ; deallocate the stack space
    mov rax, 0 ; set the return value to 0
    pop rbp ; restore the base pointer
    ret ; return from main
Copy
To compile and run this program, you can use the following commands:

nasm -f elf64 hello.asm # assemble the source file into an object file
gcc -no-pie hello.o -o hello # link the object file with gcc and produce an executable file
./hello # run the executable file
