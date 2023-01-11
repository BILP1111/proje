#include <conio.h>
 
void main(void)
{
int yil = 0;
 
clrscr();
 
printf("\n Yil tespiti");
printf("\n =================");
 
printf("\n Kontrol edilecek yili giriniz : "); // kontol edilecek yýl , yil1 olarak tanýtýlýr
scanf("%i",&yil);
fflush(stdin);
 
if( yil % 4 == 0 || yil%400 == 0 )    // girilen deðerler koþula göre ekran çýktýsýný hazýrlar
printf("\n %i yili artik yildir. ");
else
printf("\n %i yili artik yil degildir.");
 
getch();
}
