
//for d�ng�s� ile 1 den 25 e kadar ve 25 ten 1 e kadar say�lar� yazd�rd�k.
//printf ile say�lar� ve ba�l�klar� ekrana yazd�rd�k.


#include <stdio.h>

    int main()
{
    int sayi = 0; // int ile sayi de�erini tan�mlad�n
	printf("1'den 25'e ileri sayma\n"); // printf ile ba�l��� yazd�rd�m
	
	for(sayi=1;sayi<=25;sayi++) // for d�ng�s� ile say�lar� 1-25 ve 25-1'e yazd�rd�m
    {
    printf("\t%i",sayi);
    }
    printf("\n\n\n"); // i� i�e girmemesi i�in sat�r atlatt�rd�m
    printf("25'den 1'e geri sayma\n"); // printf ile ba�l��� yazd�rd�m
 
 for(sayi=25;sayi>=1;sayi--)
 {
  printf("\t%i",sayi);
}

}
