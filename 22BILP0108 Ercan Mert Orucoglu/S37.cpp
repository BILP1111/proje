#include <stdio.h>

int main(void)
{
    int sayilar[10], sayac = 0, maximum = 0, minimum = 0; // int de�i�keni ile 4 ated de�i�ken tan�mlad�m.
 
 
    for(sayac=0; sayac < 10; sayac++) // for d�ng�s�yle kullan�c�dan s�ra s�ra 10 tane de�er girmesini istedim
    {
        printf("%i. Sayi : ",sayac+1);
        scanf("%i",&sayilar[sayac]); // girilen de�erleri scanf ile okuttum
  
 
    if( sayac == 0 ) // if komutu ile girilen de�erler aras�ndan en b�y�k ve en k���k say�y� belirlettim
    minimum = sayilar[0];
 
    if(sayilar[sayac] > maximum )
    maximum = sayilar[sayac];
 
    if(sayilar[sayac] < minimum )
    minimum = sayilar[sayac];
 }
 
    printf("\n En buyuk sayi: %i ",maximum); // printf ile ekrana yazd�rd�m
    printf("\n En kucuk sayi: %i ",minimum);
}
