#include <stdio.h>
int main(void)
{
	char harf;  /* Sayi vs. deðilde harf istendiði için char yani karakter olarak tanýmladým deðiþkeni.*/
	
	printf("Bir harf giriniz: "); /* Printf ile harf girilmesini istedim */
	scanf("%c", &harf); /* scanf %c (bu kýsýmda %d denedim fakat olmadý o yüzden yardým aldým) ile girilen deðeri harf olarak okuttum. */
	
	switch(harf) { /* switch-case komutu ile bir switch oluþturup sesli harfleri case olarak tanýmladým ve konsola tanýmladýðým harflerden yani bir sesli harf girilirse bu bir sesli harftir yazýlmasýný istedim.*/
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	
	printf("Girdiginiz harf bir sesli harftir. ");
	break; /* switch-case sonunda break kullandým döngüyü burada durdurmak istediðim için. */
	
	default: /* Döngüyü durduktan sonra default komutu ile yukarýda case olarak atadýðým harfler dýþýnda farklý bir harf girildiðinde girdiðiniz harf bir sessiz harftir yazmasýný istedim */
	printf("Girdiginiz harf bir sessiz harftir. ");
	
	}
}

/* NOT OLARAK; ARAÞTIRDIÐIMDA SWÝTCH-CASE YERÝNE SANIRIM ÝF ELSE KOMUTU ÝLEDE YAPILABÝLÝRDÝ FAKAT DAHA UZUN SÜRECEÐÝ VE ÝÇÝN SWÝTCH-CASE KULLANMAK ÝSTEDÝM.*/
