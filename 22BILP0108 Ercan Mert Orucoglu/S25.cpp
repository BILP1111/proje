#include <stdio.h>
 
int main(void)
{
    int sayi = 0, n = 0; // int sayi ve n de�i�kenini tan�mlad�m
 
    printf("\n Bir sayi girin : "); // kullan�c�dan bir say� girilmesini istedim.
    scanf("%i",&sayi); // girilen de�eri say� de�eri olarak okuttum

    for(n=1;n<=10;n++) // for d�ng�s� ile girilen say�n�n 1 den 10a kadar ki �arp�m tablosunu olu�trdm.
    {
    printf("\n %i * %i = %i",sayi,n,(sayi*n) ); // hangi say�n�n �arp�m tablosu isteniyorsa o say�n�n �arp�m tablosunu ekrana yazd�rd�m
}
}
