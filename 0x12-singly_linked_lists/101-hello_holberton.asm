global main
section .data
hello	db	"Hello, Holberton", 10
hello_len	equ	$-hello
section .text
main:
mov rax, 1
mov rdi, 1
mov rsi, hello
mov rdx, hello_len
syscall
push rax
mov rax, 60
pop rdi
sub rdi, hello_len
syscall

