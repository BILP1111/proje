#include <stdio.h>
int main()
{
	int sayi;
	printf("bir sayi giriniz : "); //C'de ekrana bir text ya da de�i�ken i�eriklerini yazd�rmak i�in standart k�t�phane i�inde bulunan printf fonksiyonu kullan�l�r. 
	scanf("%d" ,&sayi); //Scanf fonksiyonu C dilinde bir giri� fonksiyonudur. Bu fonksiyon, kullan�c�dan girdi almak i�in kullan�l�r.
	
	printf("girilen sayi: %d" ,sayi); //C'de ekrana bir text ya da de�i�ken i�eriklerini yazd�rmak i�in standart k�t�phane i�inde bulunan printf fonksiyonu kullan�l�r.
	
	return 0; //Return anahtar kelimesi, bir fonksiyonun �al��mas�n� tamamlamas� ve belirli bir de�er d�nd�rmesi i�in kullan�l�r
}

