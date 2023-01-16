section .text:
	global main

	main:
		mov	rax,1
		mov	rdi,1
		mov	rsi,message
		mov	rdx,length
		syscall

		mov	rax,60
		mov	rdi,0
		syscall

section .data:
	message: db "Hello, Holberton", 0xA
	length: equ $-message
