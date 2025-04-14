;main.asm
GLOBAL main
EXTERN hello_world
section .data
    ; No data section needed for this example
section .text
main:
    call hello_world
    mov eax, 1 ;systemcall exit()
    mov ebx, 0 ;parametro para exit()
    int 80h