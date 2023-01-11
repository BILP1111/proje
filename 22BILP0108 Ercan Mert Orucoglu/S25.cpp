#include <stdio.h>
 
int main(void)
{
    int sayi = 0, n = 0; // int sayi ve n deðiþkenini tanýmladým
 
    printf("\n Bir sayi girin : "); // kullanýcýdan bir sayý girilmesini istedim.
    scanf("%i",&sayi); // girilen deðeri sayý deðeri olarak okuttum

    for(n=1;n<=10;n++) // for döngüsü ile girilen sayýnýn 1 den 10a kadar ki çarpým tablosunu oluþtrdm.
    {
    printf("\n %i * %i = %i",sayi,n,(sayi*n) ); // hangi sayýnýn çarpým tablosu isteniyorsa o sayýnýn çarpým tablosunu ekrana yazdýrdým
}
}
