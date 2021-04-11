extern  ___error
global _ft_write

_ft_write:
	mov rax, 0x2000004
	syscall
	jc _error
	ret

_error:
	push rax
	call ___error
	pop qword [rax]
	or rax, -1
	ret