#include <stdio.h>
int main(void)
{
	int sayi; /*Sayýyý bir deðiþken olarak tanýmladým*/
	printf("Bir sayi giriniz : "); /*Ekrana bir sayý girilmesi için printf komutunu yazdým*/
	scanf("%i",&sayi); /*Ekrana girilen sayýyý %i tanýmlayýp, girilen sayýnýn deðiþken olarak atadýðým sayý adlý deðiþken olduðu için &sayi yaptým.*/
	if( sayi % 2 == 0 ) /*Gerçekleþip gerçekleþmediði durumlarý bilmek için if atadým. Bu durumda sayý 2'ye bölünüyorsa çift bölünmüyorsa tek olduðunu atamýþ olduk.*/
		printf("\n%i bir cift sayidir.", sayi); /*Çýkan sonuç çift ise bir çift sayýdýr yazýp girilen sayýyý gösterir*/
	else /*Yukarýdaki durum gerçekleþmediði durumda alttaki olduðu için else*/
		printf("\n%i bir tek sayidir.", sayi); /*Çýkan sonuç tek ise bir tek sayýdýr yazýp girilen sayýyý gösterir*/
	return 0;
}

