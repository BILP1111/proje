#include <stdio.h>
#include <conio.h>
 
struct ogrenci // Struct yapisi tablo olusturmak icin 
{
      char ad[25];
      int yas;
}p[5],temp;
 
void main(void) // Kullanicidan ogrencilerin adi ve yasini alarak bunlari kucukten buyuge siralayan program
{
      int m = 0;
      int n = 0;
 

 
      for(n = 0 ; n< 5; n++ )
      {
            printf("\n Ogrenci : %i",n+1);
 
            printf("\n Adi    : ");
            gets(p[n].ad);
            fflush(stdin);
 
            printf("\n Yasi   : ");
            scanf("%i",&p[n].yas);
            fflush(stdin);
      }
 
 
      for( m = 0 ; m < 4; m++ )
      {
            for( n = m + 1; n < 5;n++)
            {
                if( p[m].yas > p[n].yas )
                {
                    temp = p[m];
                    p[m] = p[n];
                    p[n] = temp;
                }
            }
      }
 
      printf("\n Ogrencilerin Yaslari \n");
 
      for( n = 0;  n <5; n++ )
      {
          printf("\n %s \t %i",p[n].ad,p[n].yas);
      }
 
      getch();
}