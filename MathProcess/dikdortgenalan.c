#include <stdio.h>

int dikdortgenalan(){
    int kisa_kenar, uzun_kenar, alan;

    printf("Lutfen kisa kenari giriniz:");
    scanf_s("%d", &kisa_kenar);

    printf("Lutfen uzun kenari giriniz:");
    scanf_s("%d", &uzun_kenar);

    alan = kisa_kenar * uzun_kenar;

    printf("Dikdortgenin alani: %d", alan);
}
