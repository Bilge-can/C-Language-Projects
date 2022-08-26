#include <stdio.h>

int carpma() {
    int birinci_sayi, ikinci_sayi, carpma;

    printf("Lutfen birinci sayiyi giriniz:\n");
    scanf_s("%d", &birinci_sayi);

    printf("Lutfen ikinci sayiyi giriniz:\n");
    scanf_s("%d", &ikinci_sayi);

    carpma = birinci_sayi * ikinci_sayi;

    printf("Carpim sonucu: %d", carpma);

    return 0;
}
