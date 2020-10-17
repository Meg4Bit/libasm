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
	mov		[s1], al
	mov		[s2], bl
	mov		rax, [s1]
	sub		rax, [s2]
	ret

section	.bss
s1 resb 8
s2 resb 8
