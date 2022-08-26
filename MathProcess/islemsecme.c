#include <stdio.h>

int islemsecme(){

    int birinci_sayi, ikinci_sayi, toplama_islemi, cikarma_islemi, sayi_girisi;

    printf("Lutfen birinci sayiyi giriniz:");
    scanf_s("%d", &birinci_sayi);

    printf("Lutfen ikinci sayiyi giriniz:");
    scanf_s("%d", &ikinci_sayi);

    printf("Toplama islemi yapmak icin 1'e, cikarma islemi yapmak icin 2'ye basin------>");
    scanf("%d", &sayi_girisi);

    if(sayi_girisi == 1){
        toplama_islemi = birinci_sayi + ikinci_sayi;
        printf("Sonuc: %d", toplama_islemi);
    }
    else if (sayi_girisi == 2){
        cikarma_islemi = birinci_sayi - ikinci_sayi;
        printf("Sonuc: %d", cikarma_islemi);
    }
    else{
        printf("Sectiginiz deger hatalidir!!");
    }

}
