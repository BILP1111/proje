#include <stdio.h>

int main(void)
{
    int sayilar[10], sayac = 0, maximum = 0, minimum = 0; // int deðiþkeni ile 4 ated deðiþken tanýmladým.
 
 
    for(sayac=0; sayac < 10; sayac++) // for döngüsüyle kullanýcýdan sýra sýra 10 tane deðer girmesini istedim
    {
        printf("%i. Sayi : ",sayac+1);
        scanf("%i",&sayilar[sayac]); // girilen deðerleri scanf ile okuttum
  
 
    if( sayac == 0 ) // if komutu ile girilen deðerler arasýndan en büyük ve en küçük sayýyý belirlettim
    minimum = sayilar[0];
 
    if(sayilar[sayac] > maximum )
    maximum = sayilar[sayac];
 
    if(sayilar[sayac] < minimum )
    minimum = sayilar[sayac];
 }
 
    printf("\n En buyuk sayi: %i ",maximum); // printf ile ekrana yazdýrdým
    printf("\n En kucuk sayi: %i ",minimum);
}
