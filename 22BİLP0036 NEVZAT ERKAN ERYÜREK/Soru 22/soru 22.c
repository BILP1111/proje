#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 int sayi = 0;
 int n = 0;
 char tek = 'E';
 
 printf("\n Bir sayi giriniz : ");
 scanf("%i",&sayi);
 fflush(stdin);
 
 for(n=2;n<sayi;n++)
 {
  if( sayi % n == 0 )
  {
   tek = 'H';
   break;
  }
 }
 
 if( tek == 'E' )
  printf("\n %i sayisi ASAL sayidir.",sayi);
 else
  printf("\n %i sayisi asal sayi DEGIL.",sayi);
 
 getch();
}
