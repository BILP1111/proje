#include <stdio.h>

int main()
{
	int sayi1, sayi2; /* �ki sayi de�i�keni atad�m. */
	
	printf("Bir sayi giriniz: "); /* Printf ile sayi girilmesini istedim.*/
	scanf("%d",&sayi1); /* Girilen sayiyi scanf ile okuttum. */
	
	printf("Bir sayi daha giriniz: "); /* Printf ile bir sayi daha girilmesini istedim.*/
	scanf("%d",&sayi2); /* Girilen sayiyi scanf ile okuttum. */
	
	int toplam = sayi1 + sayi2; /* Sayi1 ve 2 yi toplatt�m. */
	
	printf("Girilen iki sayinin toplami: %d\n",toplam); /* Printf ile girilen iki say�n�n toplam�n� ekrana yazd�rd�m. */
	
}
