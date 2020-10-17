section	.text
	global ft_strdup

ft_strdup:
	extern	ft_strlen
	extern	malloc
	push	rdi
	call	ft_strlen
	mov		rdi, rax
	inc		rdi
	push	rdi
	call	malloc
	cmp		rax, 00
	je		exit
	pop		rcx
	pop		rsi
	push	rax
	loop1:
	mov		bl, [rsi]
	mov		[rax], bl
	inc		rsi
	inc		rax
	loop	loop1
	pop		rax
	exit:
	ret
