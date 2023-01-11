#include <stdio.h>
#include <conio.h>
 
int main()
{
      void asalsayi(int);
      int sayi = 0;
 
      printf("\n Bir sayi giriniz : ");
      scanf("%i",&sayi);
      fflush(stdin);
 
      asalsayi(sayi);
 
      getch();
}
 
void asalsayi(int sayi)
{
      int i  = 0;
      char prime = 'E';
 
      for(i=2;i<sayi;i++)
      {
            if( sayi % i == 0 )
            {
                prime = 'H';
                break;
            }
      }
 
      if( prime == 'E' )
            printf("\n %i bir asal sayidir.",sayi);
      else
            printf("\n %i bir asal sayi degildir.",sayi);
}
// kullanýcýdan bir sayý alýr ve bu sayýnýn asal olup olmadýðýný belirler. Program, bir fonksiyon olarak tanýmlanan "asalsayi()" fonksiyonunu çaðýrarak bu iþlemi yapar. "asalsayi()" fonksiyonu, girilen sayýnýn 2 ile sayýnýn kendisi arasýndaki sayýlardan biriyle tam bölünüp bölünmediðine bakar. Eðer tam bölünürse, bu sayý asal sayý deðildir ve program "sayi bir asal sayi degildir" mesajýný yazdýrýr. Eðer tam bölünmezse, bu sayý asal sayýdýr ve program "sayi bir asal sayidir" mesajýný yazdýrýr.
