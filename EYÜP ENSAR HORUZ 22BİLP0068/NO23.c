#include <stdio.h>
#include <conio.h>
void main(void)   // boþ 
{
 int sayi = 0;
 
 clrscr();
 
 printf("1'den 25'e ileri sayma\n");    
 printf("======================\n\n");
 
 for(sayi=1;sayi<=25;sayi++)     /// for döngüsü ile sayý 1 ve 25 arasýnda olmalýdýr
 {
  printf("\t%i",sayi);
 }
 printf("\n\n\n");
 printf("25'den 1'e geri sayma\n");   /// 25 den 1 e geri sayma komutu verildi
 printf("=====================\n\n");
 
 for(sayi=25;sayi>=1;sayi--)    /// for döngüsü ile 25 den 1 e kadar sayý azalarak ilerler.
 {
  printf("\t%i",sayi);
 }
 
 getch();
}
