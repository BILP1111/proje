#include <conio.h>
 
void main(void)
{
int yil = 0;
 
clrscr();
 
printf("\n Yil tespiti");
printf("\n =================");
 
printf("\n Kontrol edilecek yili giriniz : "); // kontol edilecek y�l , yil1 olarak tan�t�l�r
scanf("%i",&yil);
fflush(stdin);
 
if( yil % 4 == 0 || yil%400 == 0 )    // girilen de�erler ko�ula g�re ekran ��kt�s�n� haz�rlar
printf("\n %i yili artik yildir. ");
else
printf("\n %i yili artik yil degildir.");
 
getch();
}
