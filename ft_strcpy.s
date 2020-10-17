section	.text
	global ft_strcpy

ft_strcpy:
	push	rdi
	loop1:
	mov		bl, [rsi]
	mov		[rdi], bl
	cmp		bl, 00
	je		exit
	inc		rsi
	inc		rdi
	jmp		loop1
	exit:
	pop		rax
	ret
