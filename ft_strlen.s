section	.text
	global ft_strlen

ft_strlen:
	loop1:
	mov		bl, [rdi]
	cmp		bl, 00
	je		exit
	inc		rax
	inc		rdi
	jmp		loop1
	exit:
	ret
