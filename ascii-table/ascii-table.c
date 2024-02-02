#include <stdio.h>

int main(void){

    printf("*-------------------------------*\n");
    printf("|-------- ASCII TABLE ----------|\n");
    printf("|-------------------------------|\n\n");

    printf("DECIMAL | CHARACTER | HEXADECIMAL\n");
    printf("------------ ~~~~ ---------------\n");

    for (int i = 0; i < 65; i++){
        printf("   %d          %c           %x\n", i, i, i);
    }

    printf("\n\n\n------------ ~~~~ ---------------\n\n\n");

    for (int i = 64; i < 128; i++){
        printf("   %d          %c           %x\n", i, i, i);
    }
    
    return 0;
}
