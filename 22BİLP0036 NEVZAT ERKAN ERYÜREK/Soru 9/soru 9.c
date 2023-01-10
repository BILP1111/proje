#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 int sayi = 0;
 
 printf("\n Tek mi, Cift mi? ");
 printf("\n ================ ");
 
 printf("\n Bir sayi giriniz : ");
 scanf("%i",&sayi);
 fflush(stdin);
 
 if( sayi % 2 == 0 )
  printf("\n %i bir cift sayidir.",sayi);
 else
  printf("\n %i bir tek sayidir.",sayi);
 
 getch();
}
