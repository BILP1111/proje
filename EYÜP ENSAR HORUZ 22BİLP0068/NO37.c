#include <stdio.h>

int main(void){

    int sayilar[10],sayac = 0,max = 0,min = 0;

    for (sayac = 0; sayac < 10; sayac++) // d�ng� kullanarak kullan�c� say�y� girerken 10 a kadar tekrardan girmesini istedik
    
    {
    printf("%i. Sayi : ",sayac+1);
    scanf("%i",&sayilar[sayac]);

    if(sayac == 0)
    min = sayilar[0];

    if(sayilar[sayac] > max)
    max = sayilar[sayac];

    if(sayilar[sayac] < min)
    min = sayilar[sayac];
    }
printf("En Buyuk Sayi : %i \nEn Kucuk Sayi : %i ",max,min);

    return (0);
}



