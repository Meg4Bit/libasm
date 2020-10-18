section	.text
	global ft_read

ft_read:
	extern	__errno_location
	mov		rcx, rsi
	mov		rbx, rdi
	mov		rax, 0
	syscall
	cmp		rax, 0
	jl		error
	ret
	error:
	neg		rax
	mov		rbx, rax
	call	__errno_location
	mov		[rax], rbx
	mov		rax, -1
	ret
