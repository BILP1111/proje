#include <stdio.h>

 
int main(void)
{
    int sayilar[10] = {4,11,15,36,55,83,42,99,18,10}, aranan = 0, konum = 0, sayac = 0; // int, char de�i�keni ile de�i�kenleri atad�m
 
    char bulundu = 'Y';
 
    printf("Aranacak sayi: "); // printf ile kullan�c�dan bir de�er girmesini isteyip girilen de�eri okuttum.
    scanf("%i",&aranan);
 
    for( sayac= 0; sayac < 10; sayac++ ) // for d�ng�s� ile belirledi�im say�lar�n aras�ndan say� giri�i yapt���m�z say�y� aratt�m.
	{
	if( sayilar[sayac] == aranan )
	{
	bulundu = 'E';
	konum = sayac + 1;
break;
}
}
 
    if(bulundu == 'E' )
        printf("\n %i sayisi listenin %i. sirasinda",aranan,konum); // bulundu�u durumlarda ekrana gelecek yaz�
    else
    printf("\n %i gecerli degil.",aranan); // bulunmad��� durumlarda ekrana gelecek yaz�.
}
