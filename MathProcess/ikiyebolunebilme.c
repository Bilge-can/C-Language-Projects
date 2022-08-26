#include <stdio.h>

int ikiyebolunebilme(){

    int sayi, sonuc;

    printf("Lutfen bir sayi giriniz:");
    scanf_s("%d", &sayi);

    sonuc = sayi % 2;

    if (sonuc == 0){
        printf("Sayi cifttir");
    }
    else if (sonuc != 0){
        printf("Sayi tektir");
    }
}
