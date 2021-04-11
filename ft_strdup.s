extern  ___error
global _ft_strdup
extern _ft_strlen
extern _ft_strcpy
extern _malloc

_ft_strdup:
	call _ft_strlen
	push rdi
	mov rdi, rax
	inc rdi
	call _malloc
	cmp rax, 0
	je exit
	mov rdi, rax
	pop rsi
	call _ft_strcpy
	ret
exit:
	ret



