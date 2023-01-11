#include <stdio.h>
#include <conio.h>
 
int main()
{
int yil = 0;
//Yýl deðer atar.
 
printf("\n Artik yil tespiti...");//Girilen Sayýnýn Yýl Tespiti
printf("\n =================");
 
printf("\n Kontrol edilecek yili giriniz : ");//Kontrol edilir.
scanf("%i",&yil);
 
if( yil % 4 == 0 || yil %400 == 0 )//Eðer þartý sorulur.

printf("\n %i yili artik yildir. ");//Girdiðiniz sayý yýldýr.
else
printf("\n %i yili artik yil degildir.");//Girdiðiniz sayý yýl deðildir.
 
getch();
}
