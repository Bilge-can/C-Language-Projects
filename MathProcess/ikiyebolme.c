#include <stdio.h>

int ikiyebolme(){

    int sayi, sonuc;

    printf("Lutfen bir sayi giriniz:");
    scanf_s("%d", &sayi);

    sonuc = sayi / 2;

    printf("Sonuc: %d", sonuc);

}