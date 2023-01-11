#include <stdio.h>
#include <conio.h>
 
int main()
{
 int sayi = 0;
 int n = 0;
 int sayac = 0;
 char asal = 'E';
 //Deðer atama yapýlýr.
 
 
 printf("\n Bir sayi giriniz: ");//Kiþiden sayý girilmesi istenir.
 scanf("%i",&sayi);
 
 for(n=2;n<sayi;n++)//For döngüsü ile 2 den baþlayarak birer birer arttýrarak sayýlarý bulur.
 {
  if( sayi % n == 0 )
  {
   asal = 'H';
   break;
  }
 }
 
 if( asal == 'E' )
 {
  printf("\n %i asal sayisindan sonraki ",sayi);
  printf("10 asal sayi :\n");
  sayi= sayi + 1;
 
  while(sayac < 10)//10 dan küçük sayýlarýndan sonraki 10 tane asal sayý gösterilir.
  {
   asal = 'E';
 
   for(n=2;n<sayi;n++)
   {
    if( sayi % n == 0 )
    {
     asal = 'H';
     break;
    }
   }
   if(asal == 'E' )
   {
    printf("%i\t",sayi);//Sayýyý ekrana yazdýrýr.
    sayac++;
   }
 
   sayi++;
  }
 }
 else
  printf("\n %i asal sayi degildir.",sayi);//Girdiðiniz sayý asal sayý deðildir.
 
 getch();
}
