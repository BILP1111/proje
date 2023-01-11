#include <stdio.h>

int main()
{
	int sayi1, sayi2; /* Ýki sayi deðiþkeni atadým. */
	
	printf("Bir sayi giriniz: "); /* Printf ile sayi girilmesini istedim.*/
	scanf("%d",&sayi1); /* Girilen sayiyi scanf ile okuttum. */
	
	printf("Bir sayi daha giriniz: "); /* Printf ile bir sayi daha girilmesini istedim.*/
	scanf("%d",&sayi2); /* Girilen sayiyi scanf ile okuttum. */
	
	int toplam = sayi1 + sayi2; /* Sayi1 ve 2 yi toplattým. */
	
	printf("Girilen iki sayinin toplami: %d\n",toplam); /* Printf ile girilen iki sayýnýn toplamýný ekrana yazdýrdým. */
	
}
