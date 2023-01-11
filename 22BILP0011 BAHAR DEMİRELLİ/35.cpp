#include <stdio.h>
#include <conio.h>
 
int main()
{
 int sayi = 0;		/* değer tanımlanıyor */
 int n = 0;		/* değer tanımlanıyor */
 int sayac = 0;		/* değer tanımlanıyor */
 char asal = 'E';		/* değer tanımlanıyor */
 
 printf("\n Bir sayi giriniz : ");		/* ekrana yazı yazdırılıyor */
 scanf("%i",&sayi);		/* alınan değer yazdırılıyor */
 
 for(n=2;n<sayi;n++)	/* döngüye sokuluyor, n 2`ye eşitleniyor, n sayi`ya kadar döngüde kalıyor, n +1 şeklinde artıyor */	
 {
  if( sayi % n == 0 )		/* eğer sayi n'e bölündüğünde kalan 0 ise */
  {
   asal = 'H';		/* 	asal değerini  "H" değerine eşitliyoruz	*/
   break;
  }
 }
 
 if( asal == 'E' )		/* eğer asal "E" ise */
 {
  printf("\n %i asal sayisindan sonraki ",sayi);		/* ekrana yazı yazdırılıyor */
  printf("10 asal sayi : ");		/* ekrana yazı yazdırılıyor */
  sayi= sayi + 1;		/* islem yapılıyor */
 
  while(sayac < 10)		/* koşul tanımlıyoruz , sayac 10'dan büyük ve eşit olunca */

  {
   asal = 'E';		/* 	asal değerini  "E" değerine eşitliyoruz	*/
 
   for(n=2;n<sayi;n++)		/* döngüye sokuluyor, n 2`ye eşitleniyor, n sayi`ya kadar döngüde kalıyor, n +1 şeklinde artıyor */
   {
    if( sayi % n == 0 )		/* eğer sayi n'e bölündüğünde kalan 0 ise */
    {
     asal = 'H';		/* 	asal değerini  "H" değerine eşitliyoruz	*/
     break;
    }
   }
   if(asal == 'E' )		/* eğer asal "E" ise */				
   {
    printf("%i\t",sayi);		/* ekrana değer yazdırılıyor */
    sayac++;
   }
 
   sayi++;		/* sayi +1 şeklinde artması */
  }
 }
 else		/* değilse */
  printf("\n %i asal sayi degildir.",sayi);		/* ekrana yazı yazdırılıyor */
 
 getch();
}