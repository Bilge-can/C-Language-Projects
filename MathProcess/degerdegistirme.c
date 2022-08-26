#include <stdio.h>

int degerdegistirme() {

    int birinci_deger, ikinci_deger, sonuc;

    printf("Lutfen birinci sayiyi giriniz:");
    scanf_s("%d", &birinci_deger);

    printf("Lutfen ikinci sayiyi giriniz:");
    scanf_s("%d", &ikinci_deger);

    sonuc = birinci_deger;
    birinci_deger = ikinci_deger;
    ikinci_deger = sonuc;


    printf("Birinci deger: %d \n", birinci_deger);
    printf("Ikinci deger: %d \n", ikinci_deger);

}
