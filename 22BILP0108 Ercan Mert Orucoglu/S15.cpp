#include <stdio.h>
int main(void)
{
	char harf;  /* Sayi vs. de�ilde harf istendi�i i�in char yani karakter olarak tan�mlad�m de�i�keni.*/
	
	printf("Bir harf giriniz: "); /* Printf ile harf girilmesini istedim */
	scanf("%c", &harf); /* scanf %c (bu k�s�mda %d denedim fakat olmad� o y�zden yard�m ald�m) ile girilen de�eri harf olarak okuttum. */
	
	switch(harf) { /* switch-case komutu ile bir switch olu�turup sesli harfleri case olarak tan�mlad�m ve konsola tan�mlad���m harflerden yani bir sesli harf girilirse bu bir sesli harftir yaz�lmas�n� istedim.*/
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	
	printf("Girdiginiz harf bir sesli harftir. ");
	break; /* switch-case sonunda break kulland�m d�ng�y� burada durdurmak istedi�im i�in. */
	
	default: /* D�ng�y� durduktan sonra default komutu ile yukar�da case olarak atad���m harfler d���nda farkl� bir harf girildi�inde girdi�iniz harf bir sessiz harftir yazmas�n� istedim */
	printf("Girdiginiz harf bir sessiz harftir. ");
	
	}
}

/* NOT OLARAK; ARA�TIRDI�IMDA SW�TCH-CASE YER�NE SANIRIM �F ELSE KOMUTU �LEDE YAPILAB�L�RD� FAKAT DAHA UZUN S�RECE�� VE ���N SW�TCH-CASE KULLANMAK �STED�M.*/
