#include <stdio.h>

int islemsecmeiki(){

    int birinci_sayi, ikinci_sayi, toplama_islemi, cikarma_islemi, sayi_girisi;

    printf("Lutfen birinci sayiyi giriniz:");
    scanf_s("%d", &birinci_sayi);

    printf("Lutfen ikinci sayiyi giriniz:");
    scanf_s("%d", &ikinci_sayi);

    printf("Lutfen toplama islemi icin 1'e, cikrama islemi icin 2'ye basin-------->");
    scanf_s("%d", &sayi_girisi);

    if(sayi_girisi == 1 || sayi_girisi == 3){
        toplama_islemi = birinci_sayi + ikinci_sayi;
        printf("Sonuc: %d", toplama_islemi);
    }
    else if (sayi_girisi == 2 || sayi_girisi == 4){
        cikarma_islemi = birinci_sayi - ikinci_sayi;
        printf("Sonuc: %d", cikarma_islemi);
    }
    else{
        printf("Hatali deger girdiniz!!!");
    }
}