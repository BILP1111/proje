#include <stdio.h>
#include <conio.h>
#include <math.h>
 
void main(void)  // bo� 
{
 int yas = 0;   
 
 clrscr();
 
 printf("\n Yasinizi giriniz : ");   // girilen ya� bilgisi yas olarak programa tan�t�l�r
 scanf("%i",&yas);
 fflush(stdin);
 
 if( yas >= 1 && yas <= 4)      // e�er 1 ile 4 aras� ise bebeklik d�nemi
  printf("\n Bebeklik Donemi");
 else if( yas > 4 && yas <= 14 )   // de�ilse e�er 4 14 aras� ise ilk�tretim d�nemi
  printf("\n Ilkogretim Donemi");
 else if( yas > 14 && yas <= 21 )
  printf("\n Yuksek Ogretim Donemi");
 else if( yas > 21 && yas <= 60 )
  printf("\n Is Hayati ");
 else if( yas > 60 )
  printf("\n Emeklilik Donemi");
 else
  printf("\n Gecersiz Yas...");   // ya� bilgisi belirtilenden y�ksek veya d���k girilirse ge�ersiz ya� hatas� al�n�r 
 
 getch();
}
