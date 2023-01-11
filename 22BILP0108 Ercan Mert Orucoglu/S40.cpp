#include <stdio.h>

 
int main(void)
{
    int sayilar[10] = {4,11,15,36,55,83,42,99,18,10}, aranan = 0, konum = 0, sayac = 0; // int, char deðiþkeni ile deðiþkenleri atadým
 
    char bulundu = 'Y';
 
    printf("Aranacak sayi: "); // printf ile kullanýcýdan bir deðer girmesini isteyip girilen deðeri okuttum.
    scanf("%i",&aranan);
 
    for( sayac= 0; sayac < 10; sayac++ ) // for döngüsü ile belirlediðim sayýlarýn arasýndan sayý giriþi yaptýðýmýz sayýyý arattým.
	{
	if( sayilar[sayac] == aranan )
	{
	bulundu = 'E';
	konum = sayac + 1;
break;
}
}
 
    if(bulundu == 'E' )
        printf("\n %i sayisi listenin %i. sirasinda",aranan,konum); // bulunduðu durumlarda ekrana gelecek yazý
    else
    printf("\n %i gecerli degil.",aranan); // bulunmadýðý durumlarda ekrana gelecek yazý.
}
