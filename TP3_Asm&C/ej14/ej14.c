#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void encrypt(char *plain, char *cipher){
        if(!(*plain)){
            *cipher = 0;
            return;
        }
        char pad = get_pad();
        *cipher = *plain + pad;
        encrypt(plain+1, cipher+1);
    }
    void test(){
    char *msg = "Ark";
    char cipher[] = "--------";
    cipher[4] = "0";
    encrypt(msg, cipher);
    printf(cipher);
}