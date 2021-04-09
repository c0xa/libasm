global _ft_strcmp

_ft_strcmp:
	xor rbx, rbx 
	jmp loop

loop:
	mov al, BYTE [rdi + rbx]
	cmp BYTE [rdi + rbx], 0
	je exit
	cmp BYTE [rsi + rbx], al
	jne exit
	inc rbx
	jmp loop

exit:
	mov al, BYTE [rsi + rbx]
	mov bl, BYTE [rdi + rbx]
	movzx rcx, al
	movzx rax, bl
	sub rax, rcx
	ret