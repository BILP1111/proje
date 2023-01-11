// Bir dizi içerisinde verilen sayilar arasindan aranan bir sayiyi bulan program

#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
 
int main()
{
 int sayilar[10] = {4,11,15,36,55,83,42,99,18,10}; // SAYÝSAL DEÐERÝNDE DEÐER TANIMLAYIM 10 TANE SAYÝ BELÝRLÝYORUZ  
 int aranan = 0; // SAYISAL DEÐERÝNDE DEÐER TANIMLAMA
 int konum = 0; // SAYISAL DEÐERÝNDE DEÐER TANIMLAMA
 int sayac = 0; // SAYISAL DEÐERÝNDE DEÐER TANIMLAMA
 
 char bulundu = 'Y'; // KARAKTER DEÐERÝNDE DEÐER TANIMLIYORUZ VE DEÐERE Y KRÝKTERÝNÝ VERÝYORUZ
 
 printf("\n Liste icerisinde aranacak sayi : "); // KULLANICIDAN DEÐER ALMA
 scanf("%d",&aranan); // DEÐERÝ HAFIZADA TUTMA
 
 	for( sayac= 0; sayac < 10; sayac++ ) // DÖNGÜ AÇMA 
 	{
  	if( sayilar[sayac] == aranan ) // EÐER sayilar DEÐERÝ sayac Dizisi içerisinde ve aranan DEÐERÝNÝ EÞÝTSE
  	{
   	bulundu = 'E'; //  bulundu DEÐERÝ E
   	konum = sayac + 1; // konum DEÐERÝNÝ sayac + 1 EKLEYÝP DEÐERE EÞÝTLÝYORUZ
   	break; // SON
  	}
 }
 
 if(bulundu == 'E' ) // EÐER bulundu == E ÝSE 
  printf("\n %d sayisi listenin %d. sirasinda.",aranan,konum); // EKRANA aranan ve konum DEÐERÝNÝ ÇAÐIRMA
 else // DEÐÝLSE
  printf("\n %d sayisi gecerli degil.",aranan); // EKRANA aranan DEÐERÝNÝ EKRANA ÇAÐIRMA	
 
 return 0;
}
