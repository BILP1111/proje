// char ve int de�i�kenlerini atad�k
// printf ile ba�l�klar� yaz�p evli olup olmad���n� sorduk
// evli olup olmad���n� verilen cevaba g�re anlamak i�in if else komutunu kulland�k
// evli oldu�u durumlarda ve �ocuk say�s�na g�re bir kar��la�t�rma yap�p sonucu ekrana yazd�rd�k.
// olmad��� ve gecersiz de�er girildi�i zaman olu�abilcek komutlar�da atad�k.

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
