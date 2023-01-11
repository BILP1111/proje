// char ve int deðiþkenlerini atadýk
// printf ile baþlýklarý yazýp evli olup olmadýðýný sorduk
// evli olup olmadýðýný verilen cevaba göre anlamak için if else komutunu kullandýk
// evli olduðu durumlarda ve çocuk sayýsýna göre bir karþýlaþtýrma yapýp sonucu ekrana yazdýrdýk.
// olmadýðý ve gecersiz deðer girildiði zaman oluþabilcek komutlarýda atadýk.

#include <stdio.h>
int main(void)
{
    char evli = ' ';
	int cocuk = 0;
	
	printf("\n KARSILASTIRMALAR");
	printf("\n ==============");
	
	printf("\n Evli misiniz?? : ");
	scanf("%c",&evli);
	fflush(stdin);
	
	if( evli == 'E' || evli == 'e' )
	{
	    printf("\n Kac cocugunuz var?? : ");
		scanf("%i",&cocuk);
		fflush(stdin);
	
	if( cocuk > 2)
    {
	printf("Buyuk bir aileniz var.");
	}
	else
	{
	    printf("Kucuk bir aileniz var.");
		}
}
    else if( evli == 'H' || evli == 'h' )
        printf("\n Evli degilsiniz.");
    else
	
	printf("Gecersiz deger girdiniz.");
}
