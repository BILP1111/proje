#include <stdio.h>
#include <conio.h>

int main()
{
	int toplam = 0;		/* değer tanımlanıyor */
	int sayac = 0;		/* değer tanımlanıyor */
	int ogrencisayisi = 0;		/* değer tanımlanıyor */
	int puan[50];		/* değer tanımlanıyor */
	
	printf("%Kac ogrenci notu girilecek : ",ogrencisayisi+1);		/* ekrana yazı yazdırılıyor */
	scanf("%i",&ogrencisayisi);		/* alınan değer yazdırılıyor */
	
	for(sayac = 0 ; sayac <= ogrencisayisi-1 ; sayac++)		/* döngüye sokuluyor, sayac 0'a eşitleniyor, sayac ogrencisayisi-1'e kadar döngüde kalıyor, sayac +1 şeklinde artıyor */
	{
		printf("\n%i. Ogrenci notu : ",sayac+1);		/* ekrana yazı yazdırılıyor */
		scanf("%i",&puan[sayac]);		/* alınan değer yazdırılıyor */
		
		toplam = toplam + puan[sayac];		/* islem yapılıyor */
	}
	
	printf("\n0grenci sayisi = %i",sayac);		/* ekrana yazı yazdırılıyor */
	printf("\n\nPuan toplami = %i",toplam);		/* ekrana yazı yazdırılıyor */
	printf("\n\nPuan ortalamasi = %.1f",float(toplam)/sayac);		/* ekrana yazı yazdırılıyor */
	
	getch();
	
}