#include <stdio.h>
int main()
{
	int s1,s2,toplam; //De�erleri tan�mlamak i�in.
	
	printf("birinci sayiyi giriniz : "); //C'de ekrana bir text ya da de�i�ken i�eriklerini yazd�rmak i�in standart k�t�phane i�inde bulunan printf fonksiyonu kullan�l�r. 
	scanf("%d", &s1); //Scanf fonksiyonu C dilinde bir giri� fonksiyonudur. Bu fonksiyon, kullan�c�dan girdi almak i�in kullan�l�r.
	
	printf("ikinci sayiyi giriniz : "); //C'de ekrana bir text ya da de�i�ken i�eriklerini yazd�rmak i�in standart k�t�phane i�inde bulunan printf fonksiyonu kullan�l�r. 
	scanf("%d", &s2); //Scanf fonksiyonu C dilinde bir giri� fonksiyonudur. Bu fonksiyon, kullan�c�dan girdi almak i�in kullan�l�r.
	
	toplam=s1+s2;
	
	printf("Toplam %d",toplam ); //Ekranda yazd�rmak i�in.
	return 0; //Return anahtar kelimesi, bir fonksiyonun �al��mas�n� tamamlamas� ve belirli bir de�er d�nd�rmesi i�in kullan�l�r.
}
