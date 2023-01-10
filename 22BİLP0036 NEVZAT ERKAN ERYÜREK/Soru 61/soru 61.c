#include <stdio.h>
#include <conio.h>
 
void main(void)
{
      void asalsayi(int);
      int sayi = 0;

      printf("\n Bir sayi giriniz : ");
      scanf("%i",&sayi);
      fflush(stdin);
 
      asalsayi(sayi);
 
      getch();
}
 
void asalsayi(int say)
{
      int n  = 0;
      char prime = 'E';
 
      for(n=2;n<say;n++)
      {
            if( say % n == 0 )
            {
                prime = 'H';
                break;
            }
      }
 
      if( prime == 'E' )
            printf("\n %i bir asal sayidir.",say);
      else
            printf("\n %i bir asal sayi degildir.",say);
}
