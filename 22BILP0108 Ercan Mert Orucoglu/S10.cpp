#include <stdio.h>
int main(void)
{
	int sayi1, sayi2;
	
	printf("Bir sayi giriniz: ");  /* Printf ile bir sayi girilmesini istedim.*/
	scanf("%d",&sayi1); /* Scanf %d ile girilen ilk sayiyi okuttum.*/
	
	printf("Bir sayi daha giriniz: "); /* Printf ile bir sayi girilmesini istedim.*/
	scanf("%d",&sayi2); /* Scanf %d ile girilen ikinci sayiyi okuttum.*/
	
	if (sayi1 > sayi2) { /* �f komutu ile iki z�t komut yaz�p hangisi hangisinden daha b�y�kse ekrana yazd�ran komutu yazd�m*/
		printf("%d %d'den buyuktur.", sayi1, sayi2);
	}
	else {
		printf("%d %d'den buyuktur.", sayi2, sayi1);
	}

}
