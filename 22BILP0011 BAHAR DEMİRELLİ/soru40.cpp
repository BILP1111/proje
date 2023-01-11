#include <stdio.h>
#include <conio.h>
 
int main()
{
 int sayilar[10] = {4,11,15,36,55,83,42,99,18,10};
 int aranan = 0;
 int konum = 0;
 int sayac = 0;
 
 char bulundu = 'A';
 

 printf("\n Liste icerisinde aranacak sayi : ");
 scanf("%i",&aranan);
 fflush(stdin);
 
 for( sayac= 0; sayac < 10; sayac++ )
 {
  if( sayilar[sayac] == aranan )
  {
   bulundu = 'E';
   konum = sayac + 1;
   break;
  }
 }
 
 if(bulundu == 'E' )
  printf("\n %i sayisi listenin %i. sirasinda.",aranan,konum);
 else
  printf("\n %i sayisi gecerli degil.",aranan);
 
 getch();
}

//"sayilar", "aranan", "konum", "sayac" ve "bulundu" deðiþkenleri tanýmlanýr. "sayilar" deðiþkeni aranacak sayýlarý saklayacak olan bir dizidir, "aranan" deðiþkeni ise kullanýcýdan girilen sayýyý saklar, "konum" deðiþkeni ise aranan sayýnýn dizideki konumunu saklar, "sayac" deðiþkeni ise döngüler için kullanýlýr ve "bulundu" deðiþkeni ise sayýnýn dizide bulunup bulunmadýðýný saklar. Kullanýcýdan aranacak sayýyý girdirir.
