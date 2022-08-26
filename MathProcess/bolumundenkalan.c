#include <stdio.h>

int bolumundenKalan(){

    int bolen, bolunen, kalan;

    printf("Lutfen bolunen sayiyi giriniz:");
    scanf_s("%d", &bolunen);

    printf("Lutfen bolen sayiyi giriniz:");
    scanf_s("%d", &bolen);

    kalan = bolunen % bolen;

    printf("Kalan sayi: %d", kalan);
}
