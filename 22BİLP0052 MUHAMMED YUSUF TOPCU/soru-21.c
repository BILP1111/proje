#include <stdio.h>
#include <conio.h>
 
int main()
{
 char evli = ' ';
 int cocuk = 0;
 //de�er atan�r.
 
 
 printf("\n Sonuca bagli karsilastirmalar...");
 printf("\n ================================");
 
 printf("\n Evli misiniz? : ");//Ki�inin Medeni Halini Sorar.
 scanf("%c",&evli);
 
 if( evli == 'E' || evli == 'e' )//E�er "e","E" ise evli
 {
  printf("\n Kac cocugunuz var? : ");//Ki�iye sorulur.
  scanf("%i",&cocuk);
 
  if( cocuk > 2)//E�er 2 �ocuktan fazla varsa b�y�k ailedir.
  {
    printf("\n Buyuk bir aileniz var.");
  }
  else//De�ilse 2 den k���k ise k���k aileniz var
  {
   printf("\n Kucuk bir aileniz var.");
  }
 }//De�ilse E�er "H" Evli de�ilsiniz.
 else if( evli == 'H' || evli == 'h' )
  printf("\n Evli degilsiniz demek. Hmmmm..");
 else
  printf("\n Gecersiz girdi.");
 
getch();
}
