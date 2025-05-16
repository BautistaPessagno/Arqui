GLOBAL pooling

section .text


pooling:
    push rbp
    mov rbp, rsp
    mov rax, 0

    .read_keyBoard:
        mov al, 0
        in al, 64h
        test al, 1
        je .read_keyBoard

    .found:
        in al, 60h
        
        
        mov rsp, rbp
        pop rbp

        ret
        







