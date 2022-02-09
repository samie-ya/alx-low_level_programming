global _main
section .text

_start:
    mov rax, 1 ; syscall for write
    mov rdi, 1 ; file descriptor for STDOUT
    mov rsi, message ; buffer
    mov rdx, msglen ; length of buffer
    syscall
    mov rax, 60 ; sys_exit
    mov rdi, 0 ; 0
    syscall


section .data
    message: db "Hello, Holberton", 10
    msglen equ $-message
