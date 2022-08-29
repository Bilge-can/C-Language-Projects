#include <stdio.h>

int yildiz(){

    int sayi;
    printf("Lutfen bir sayi giriniz:");
    scanf_s("%d", &sayi);

    for (int i=0; i<20; i++){
        printf("*");
        for (int k =0; k<sayi; k++){
            printf("-", i);
        }
        printf("*");
        printf("\n");
    }
}
