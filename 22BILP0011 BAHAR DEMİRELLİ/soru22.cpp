#include <stdio.h>
 
int main()
{
 int sayi = 0;
 int i = 0;
 char tek = 'E';
 
 
 printf("\n Bir sayi giriniz : ");
 scanf("%i",&sayi);
 fflush(stdin);
 
 for(i=2;i<sayi;i++)
 {
  if( sayi % i == 0 )
  {
   tek = 'H';
   break;
  }
 }
 
 if( tek == 'E' )
  printf("\n %i sayi asaldir.",sayi);
 else
  printf("\n %i sayisi asal degildir.",sayi);
 
return 0;
}

//Bu program, kullanýcýdan bir tamsayý girdisini alýr ve girilen sayýnýn asal olup olmadýðýný kontrol eder. 
//Eðer girilen sayý asal ise "sayý asaldýr" yazdýrýr, aksi halde "sayý asal deðildir" yazdýrýr.
