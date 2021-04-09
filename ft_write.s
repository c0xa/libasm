extern  ___error
global _ft_write

_ft_write:
	mov rax, 0x2000004
	syscall
	jc _error
	ret

_error:
	;mov r10, rax
    ;call ___error
    ;mov qword [rax], r10
    mov rax, -1
    ret