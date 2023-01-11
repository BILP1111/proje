#include <stdio.h>
int main(void)
{
	int sayi1, sayi2;
	
	printf("Bir sayi giriniz: ");  /* Printf ile bir sayi girilmesini istedim.*/
	scanf("%d",&sayi1); /* Scanf %d ile girilen ilk sayiyi okuttum.*/
	
	printf("Bir sayi daha giriniz: "); /* Printf ile bir sayi girilmesini istedim.*/
	scanf("%d",&sayi2); /* Scanf %d ile girilen ikinci sayiyi okuttum.*/
	
	if (sayi1 > sayi2) { /* Ýf komutu ile iki zýt komut yazýp hangisi hangisinden daha büyükse ekrana yazdýran komutu yazdým*/
		printf("%d %d'den buyuktur.", sayi1, sayi2);
	}
	else {
		printf("%d %d'den buyuktur.", sayi2, sayi1);
	}

}
