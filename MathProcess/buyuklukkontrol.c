#include <stdio.h>

int buyuklukkontrol(){

    int birinci_sayi, ikinci_sayi;
    printf("Lutfen birinci sayiyi giriniz:");
    scanf_s("%d", &birinci_sayi);

    printf("Lutfen ikinci sayiyi giriniz:");
    scanf_s("%d", &ikinci_sayi);

    if (birinci_sayi > ikinci_sayi){
        printf("Birinci sayi ikinci sayidan buyuktur");
    }
    else
        printf("Ikinci sayi birinci sayidan buyuktur");
}
