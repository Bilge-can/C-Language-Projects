#include <stdio.h>

int esitlikkontrol(){

    int birinci_sayi, ikinci_sayi;

    printf("Lutfen birinci sayiyi giriniz:");
    scanf_s("%d", &birinci_sayi);

    printf("Lutfen ikinci sayiyi giriniz:");
    scanf_s("%d", &ikinci_sayi);

    if (birinci_sayi == ikinci_sayi){
        printf("Girdiginiz sayilar esittir");
    }
    else{
        printf("Girdiginiz sayilar esit degildir");
    }
}
