//Kullanýcýdan iki sayi girmesini isteyen vebu iki sayinin toplamlarýný ekrana yazdiran program



#include <stdio.h>

int main()
{
	int sayi;
	int sayi1;
	int toplam;
	
	printf("Ýlk sayiyi giriniz:");
	scanf("%d",&sayi);
	
	printf("ikinci sayiyi giriniz:");
	scanf("%d",&sayi1);
	
	
	toplam=sayi+sayi1;
	
	printf("toplam: %d",toplam);
	
	getch(); 
	
	
	
}
