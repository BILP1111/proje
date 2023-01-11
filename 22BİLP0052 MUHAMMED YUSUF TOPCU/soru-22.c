#include <stdio.h>
#include <conio.h>
 
int main()
{
 int sayi = 0;
 int n = 0;
 char tek = 'E';
 //Deðer atama iþlemi yapýlýr.
 
 printf("\n Bir sayi giriniz : ");//Kiþiden Sayý girmesini ister.
 scanf("%i",&sayi);
 
 for(n=2;n<sayi;n++)//For döngüsü ile sayýlarý döngüye girer.
 {
  if( sayi % n == 0 )
  {
   tek = 'H';
   break;
  }
 }
 
 if( tek == 'E' )//Girilen sayý asal sayýdýr.
  printf("\n %i sayisi ASAL sayidir.",sayi);
 else
  printf("\n %i sayisi asal sayi DEGIL.",sayi);//Girilen sayý asal deðildir.
 
 getch();
}
