#include <stdio.h>
int main()
{
	int sayi;
	printf("bir sayi giriniz : "); //C'de ekrana bir text ya da deðiþken içeriklerini yazdýrmak için standart kütüphane içinde bulunan printf fonksiyonu kullanýlýr. 
	scanf("%d" ,&sayi); //Scanf fonksiyonu C dilinde bir giriþ fonksiyonudur. Bu fonksiyon, kullanýcýdan girdi almak için kullanýlýr.
	
	printf("girilen sayi: %d" ,sayi); //C'de ekrana bir text ya da deðiþken içeriklerini yazdýrmak için standart kütüphane içinde bulunan printf fonksiyonu kullanýlýr.
	
	return 0; //Return anahtar kelimesi, bir fonksiyonun çalýþmasýný tamamlamasý ve belirli bir deðer döndürmesi için kullanýlýr
}

