#include <stdio.h>
#include <conio.h>
 
int main()
{
 int sayi = 0;
 int n = 0;
 int sayac = 0;
 char asal = 'E';
 //De�er atama yap�l�r.
 
 
 printf("\n Bir sayi giriniz: ");//Ki�iden say� girilmesi istenir.
 scanf("%i",&sayi);
 
 for(n=2;n<sayi;n++)//For d�ng�s� ile 2 den ba�layarak birer birer artt�rarak say�lar� bulur.
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
 
  while(sayac < 10)//10 dan k���k say�lar�ndan sonraki 10 tane asal say� g�sterilir.
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
    printf("%i\t",sayi);//Say�y� ekrana yazd�r�r.
    sayac++;
   }
 
   sayi++;
  }
 }
 else
  printf("\n %i asal sayi degildir.",sayi);//Girdi�iniz say� asal say� de�ildir.
 
 getch();
}
