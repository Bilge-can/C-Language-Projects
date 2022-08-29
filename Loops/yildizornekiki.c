#include <stdio.h>

int yildiziki(){

    int i, k;

    for(i=1; i<20; i++){
        for(k=1; k<i; k++){
            printf("*");
        }
        printf("\n");
    }
}