#include <stdio.h>

int yatayyildiz(){

    int i, j, n=15;

    for(i=1; i<n; i++){
        for(j=1; j<=n-i; j++)
            printf(" ");
        for(j=1; j<=(i*2-1); j++)
            printf("*");
        printf("\n");
    }
}
