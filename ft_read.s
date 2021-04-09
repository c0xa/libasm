extern  ___error
global _ft_read

_ft_read:
	mov rax, 0x2000003
	syscall
	jc _error
	ret

_error:
	;mov r10, rax
    ;call ___error
    ;mov qword [rax], r10
    mov rax, -1
    ret