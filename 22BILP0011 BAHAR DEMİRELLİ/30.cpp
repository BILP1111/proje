#include <stdio.h>
#include <conio.h>
 
int main()	
{
 void bosluk(int);		/* değer tanımlanıyor */
 int satir = 0;		/* değer tanımlanıyor */
 int sayi = 0;		/* değer tanımlanıyor */
 int s = 40;		/* değer tanımlanıyor */
 
 for(satir =1;satir<10;satir++)		/* döngüye sokuluyor, satır 1`e eşitleniyor, satır 10`a kadar döngüde kalıyor, satır +1 şeklinde artıyor */
 {
  printf("\n");		/* ekrana değer yazdırılıyor */
  bosluk(s);
 
  for(sayi= 1; sayi <= satir;sayi++)
   printf("%i ",sayi);		/* ekrana değer yazdırılıyor */
 
  for(sayi= satir-1; sayi >= 1;sayi--)
   printf("%i ",sayi);		/* ekrana değer yazdırılıyor */
  s = s -2;		/* islem yapılıyor */
 }
 
 getch();
}
 
void bosluk(int t)		/* parametrede değişken tanımlanıyor */	 
{
 int sayac = 0;		/* değer tanımlanıyor */	
 for(sayac = 1 ; sayac <= t;sayac++)		/* döngüye sokuluyor, sayaç 1`e eşitleniyor, sayaç t`ye kadar döngüde kalıyor, sayac +1 şeklinde artıyor */
 putchar(' ');		/* cd değişken değerini ekrana yazar */
}