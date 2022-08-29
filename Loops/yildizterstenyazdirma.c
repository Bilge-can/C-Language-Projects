#include <stdio.h>

int tersyildiz(){

    for (int i=20; i>0 ; i--){
        for (int k=1; k<i ; k++ ){
            printf("*");
        }
        printf("\n");
    }
}
