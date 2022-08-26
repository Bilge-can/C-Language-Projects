#include <stdio.h>

int parolakontrol(){

    int parola, yeni_parola;

    printf("Lutfen parolanizi giriniz:");
    scanf_s("%d", &parola);

    printf("Lutfen yeni parolanizi giriniz:");
    scanf_s("%d", &yeni_parola);

    if (parola != yeni_parola){
        printf("Parolalar ayni degil.");
    }
    else
        printf("Parolalar ayni.");
}
