#include <stdio.h>
#include <conio.h>
 
void main(void) // Girilen bir sayinin fonksiyon kullanarak carpim tablosunu yazdiran program 
{
      void tablo(int);
      int sayi = 0;
 

      printf("\n Carpim Tablosu...");
      printf("\n =================");
 
      printf("\n Bir Sayi Giriniz : ");
      scanf("%i",&sayi);
      fflush(stdin);
 
      tablo(sayi);
      getch();
}
 
 
void tablo(int no)
{
      int n = 0;
      printf("\n\n %i icin carpim tablosu\n ",no);
 
      for(n=1;n<=10;n++)
      {
            printf("\n %i * %i = %i",no,n,(no*n));
      }
 
      getch();
}