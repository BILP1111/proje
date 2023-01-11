#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void main(void)
{
      void ilkharf(char*);
      char *yazi;
 
      clrscr();
 
      printf("\n Bir metin giriniz : ");   // metin grilir ve girilen metin yazi olarak programa tanýtýlýr
      gets(yazi);
      fflush(stdin);
 
      ilkharf(yazi);                
      printf("\n Metin :  %s",yazi);
 
      getch();
}
 
void ilkharf(char *metin)    
{
      char harf;    
      int n = 0;
  
      if( metin[0] >= 'a' && metin[0] <= 'z' )        // döngü yeni kelimelere geçilene kadar dönmeye devam eder. KElime baþþarýndaki harfler büyük harfe çevrilir
            metin[0] = metin[0] - 32;
      while( *(metin+n) != '\0' )
      {
            harf = *(metin+n);
            if( harf == ' '  )
            {
                  n++;
                  harf = *(metin+n);
                  if( harf >= 'a' && harf <= 'z' )
                  {
                        harf = harf - 32;
                        *(metin+n) = harf;
                  }
            }
            n++;
      }
}
