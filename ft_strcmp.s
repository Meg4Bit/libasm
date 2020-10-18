section	.text
	global ft_strcmp

ft_strcmp:
	loop1:
	mov		al, [rdi]
	mov		bl, [rsi]
	cmp		al, bl
	jne		exit
	cmp		al, 00
	je		exit
	inc		rsi
	inc		rdi
	jmp		loop1
	exit:
	and		rax, 255
	and		rbx, 255
	sub		rax, rbx
	ret
