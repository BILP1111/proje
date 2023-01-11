#include <stdio.h>
int main()
{
	int s1,s2,toplam; //Deðerleri tanýmlamak için.
	
	printf("birinci sayiyi giriniz : "); //C'de ekrana bir text ya da deðiþken içeriklerini yazdýrmak için standart kütüphane içinde bulunan printf fonksiyonu kullanýlýr. 
	scanf("%d", &s1); //Scanf fonksiyonu C dilinde bir giriþ fonksiyonudur. Bu fonksiyon, kullanýcýdan girdi almak için kullanýlýr.
	
	printf("ikinci sayiyi giriniz : "); //C'de ekrana bir text ya da deðiþken içeriklerini yazdýrmak için standart kütüphane içinde bulunan printf fonksiyonu kullanýlýr. 
	scanf("%d", &s2); //Scanf fonksiyonu C dilinde bir giriþ fonksiyonudur. Bu fonksiyon, kullanýcýdan girdi almak için kullanýlýr.
	
	toplam=s1+s2;
	
	printf("Toplam %d",toplam ); //Ekranda yazdýrmak için.
	return 0; //Return anahtar kelimesi, bir fonksiyonun çalýþmasýný tamamlamasý ve belirli bir deðer döndürmesi için kullanýlýr.
}
