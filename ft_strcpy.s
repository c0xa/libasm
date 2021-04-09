global _ft_strcpy

_ft_strcpy:
	mov rax, rdi
	xor rbx, rbx 
	jmp loop

loop:
	cmp BYTE [rsi + rbx], 0
	mov ch, BYTE [rsi + rbx]
	mov BYTE [rdi + rbx], ch
	je exit
	inc rbx
	jmp loop

exit:
	mov BYTE [rdi + rbx], 0
	ret