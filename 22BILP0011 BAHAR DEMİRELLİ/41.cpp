#include <stdio.h>
#include <conio.h>

int main()
{
	int boy[5];		/* boy 5 tane olmak üzere sınırlı şekilde tanımlanıyor */
	int kilo[5];		/* kilo 5 tane olmak üzere sınırlı şekilde tanımlanıyor */
	int top_kilo=0;		/* değer tanımlanıyor */
	int top_boy=0;		/* değer tanımlanıyor */
	int ort_boy=0;		/* değer tanımlanıyor */
	int ort_kilo=0;		/* değer tanımlanıyor */
	int n = 0;		/* değer tanımlanıyor */
	
	for(n=0; n<5; n++)		/* döngüye sokuluyor, n 0'a eşitleniyor, n 5'e kadar döngüde kalıyor, satır +1 şeklinde artıyor */
	{

	printf("%i. Ogrencinin",n+1);		/* ekrana yazı yazdırılıyor */
	
	printf("\n\nBoyu : ");		/* ekrana yazı yazdırılıyor */
	scanf("%i",&boy[n]);		/* alınan değer yazdırılıyor */
	
	printf("\n\nKilosu : ");		/* ekrana yazı yazdırılıyor */
	scanf("%i",&kilo[n]);		/* alınan değer yazdırılıyor */
	
	top_boy = top_boy + boy[n];		/* islem yapılıyor */
	top_kilo = top_kilo + kilo[n];		/* islem yapılıyor */
	}
	
	ort_boy = top_boy/5;		/* islem yapılıyor */
	ort_kilo = top_kilo/5;		/* islem yapılıyor */
	
	printf("\n\nAgirlik ortalamasi : %.2i ",ort_boy);		/* ekrana yazı yazdırılıyor */
	printf("\n\nBoy ortalamasi : %.2i ",ort_kilo);		/* ekrana yazı yazdırılıyor */
	
	getch();
}