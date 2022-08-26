#include <stdio.h>

int ikiyebolme(){

    float sayi, sonuc;

    printf("Lutfen bir sayi giriniz:");
    scanf_s("%f", &sayi);

    sonuc = sayi / 2;

    printf("Sonuc: %1.1f", sonuc);

}