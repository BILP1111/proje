#include <stdio.h>
int main(void)
{
	int sayi; /*Say�y� bir de�i�ken olarak tan�mlad�m*/
	printf("Bir sayi giriniz : "); /*Ekrana bir say� girilmesi i�in printf komutunu yazd�m*/
	scanf("%i",&sayi); /*Ekrana girilen say�y� %i tan�mlay�p, girilen say�n�n de�i�ken olarak atad���m say� adl� de�i�ken oldu�u i�in &sayi yapt�m.*/
	if( sayi % 2 == 0 ) /*Ger�ekle�ip ger�ekle�medi�i durumlar� bilmek i�in if atad�m. Bu durumda say� 2'ye b�l�n�yorsa �ift b�l�nm�yorsa tek oldu�unu atam�� olduk.*/
		printf("\n%i bir cift sayidir.", sayi); /*��kan sonu� �ift ise bir �ift say�d�r yaz�p girilen say�y� g�sterir*/
	else /*Yukar�daki durum ger�ekle�medi�i durumda alttaki oldu�u i�in else*/
		printf("\n%i bir tek sayidir.", sayi); /*��kan sonu� tek ise bir tek say�d�r yaz�p girilen say�y� g�sterir*/
	return 0;
}

