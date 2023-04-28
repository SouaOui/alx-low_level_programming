	extern printf: ; the C function to print

	section.data             ; data section, initialized variables
	msg: db "Hello, Holberton", 0 ; add null terminating need '\0'
	fmt: db "%s", 15, 0           ; The printf format, "\n", '0'
	section .text ; code section
	global main ; the standard gcc entry point
	main:       ; the program label for the entry point
	push rbp    ; set up stack frame, must be aligned

	mov rdi,fmt
	mov rsi,msg
	mov rax,0   ; or can be xor rax,rax
	call printf ; call C function

	pop rbp     ; restore stack

	mov rax,0   ; normal, no error, return value
	ret         ; return
