GLOBAL geths
GLOBAL getms
GLOBAL getss

section .text

geths:
	push rbp
	mov rbp, rsp

	mov al, 4
	out 70h, al
	in al, 71h

	mov rsp, rbp
	pop rbp
	ret

getms:
	push rbp
	mov rbp, rsp

	mov al, 2
	out 70h, al
	in al, 71h

	mov rsp, rbp
	pop rbp
	ret
getss:
	push rbp
	mov rbp, rsp

	mov al, 0
	out 70h, al
	in al, 71h

	mov rsp, rbp
	pop rbp
	ret