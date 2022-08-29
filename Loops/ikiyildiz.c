#include <stdio.h>

int ikiyildiz(){

    for(int i=1; i<20; i++){
        for(int k=1; k<i; k++){
            printf("*");
        }
        printf("\n");
    }

    for (int l=20; l>1; l--){
        for(int m=1; m<l; m++){
            printf("*");
        }
        printf("\n");
    }

}