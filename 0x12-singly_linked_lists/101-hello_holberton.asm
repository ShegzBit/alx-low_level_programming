section .data
 msg db Hello, Holberton, 10; string to be printed

section .text
 global main
 extern printf

main:
 ; call printf to write the message to stdout
 mov edi, msg        ; address of string to output
 xor eax, eax        ; clear eax register
 call printf         ; call printf function

 ; exit program with status code 0
 xor eax, eax        ; clear eax register
