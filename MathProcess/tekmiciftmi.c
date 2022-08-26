#include <stdio.h>

int tekmiciftmi(){
    int sayi, sonuc;

    printf("Lutfen birinci sayiyi giriniz:");
    scanf_s("%d", &sayi);

    if (sayi % 2 == 0) {
        sonuc = sayi * 2;
        printf("Sonuc: %d", sonuc);
    }
    else {
        sonuc = sayi * 3;
        printf("Sonuc: %d", sonuc);
    }
}
