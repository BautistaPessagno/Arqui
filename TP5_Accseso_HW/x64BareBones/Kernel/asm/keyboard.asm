GLOBAL pooling

section .text


pooling:
    push rbp
    mov rbp, rsp

    .read_keyBoard:
        mov al, 0
        in al, 64h
        test al, 1
        je .found

        jmp .read_keyBoard

    .found:
        in al, 60h
        
        push rbp
        mov rbp, rsp
        ret
        







