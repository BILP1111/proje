#include <stdio.h>
#include <conio.h>
void main(void)   // bo� 
{
 int sayi = 0;
 
 clrscr();
 
 printf("1'den 25'e ileri sayma\n");    
 printf("======================\n\n");
 
 for(sayi=1;sayi<=25;sayi++)     /// for d�ng�s� ile say� 1 ve 25 aras�nda olmal�d�r
 {
  printf("\t%i",sayi);
 }
 printf("\n\n\n");
 printf("25'den 1'e geri sayma\n");   /// 25 den 1 e geri sayma komutu verildi
 printf("=====================\n\n");
 
 for(sayi=25;sayi>=1;sayi--)    /// for d�ng�s� ile 25 den 1 e kadar say� azalarak ilerler.
 {
  printf("\t%i",sayi);
 }
 
 getch();
}
