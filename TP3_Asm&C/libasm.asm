; libasm.asm
GLOBAL pid
GLOBAL sys_write
ALIGN 4

pid:
    push ebp
    mov ebp, esp
    mov eax, 0x14 ;syscall getpid
    int 0x80
    ;el resultado ya está en eax
    mov esp, ebp
    pop ebp
    ret


sys_write:
    push ebp
    mov ebp, esp
    push ebx ;preservar ebx
    mov eax, 0x4
    mov ebx, [ebp+8] ;fd
    mov ecx, [ebp+12] ;buffer
    mov edx, [ebp+16] ;length
    int 0x80
    pop ebx
    mov esp, ebp
    pop ebp
    ret