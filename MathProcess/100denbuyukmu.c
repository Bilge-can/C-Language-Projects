#include <stdio.h>

int buyukmu(){

    int sayi, sonuc;

    printf("Lutfen bir sayi giriniz:");
    scanf_s("%d", &sayi);

    sonuc = sayi % 2;

    if (sonuc == 0){
        if (sayi > 100){
            printf("Sayi 100'den buyuktur.");
        }
         if (sayi == 100){
            printf("Sayi 100'e esittir ");
       }
        if(sayi < 100){
            printf("Sayi 100'den kucuktur ");
        }
    }
    if (sonuc != 0) {
        if (sayi > 100 && sayi < 200) {
            printf("Sayi 100 ile 200 arasindadir.");
        }
        else {
            printf("Sayi 100 ile 200 arasinda degildir");
        }
    }
}
