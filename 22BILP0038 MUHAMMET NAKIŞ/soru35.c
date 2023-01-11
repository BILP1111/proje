// Girilen bir sayi asal sayi ise bundan sonraki 10 asal sayiyi da listeyen program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
 
int main()
{
 int sayi = 0; // SAYISAL DEÐÝÞKEN OLARAK sayi DEÐERÝ TANIMLIYORUZ VE 0 A EÞÝTLÝYORUZ
 int n = 0; // SAYISAL DEÐÝÞKEN OLARAK n DEÐERÝ TANIMLIYORUZ VE 0 A EÞÝTLÝYORUZ
 int sayac = 0; // SAYISAL DEÐÝÞKEN OLARAK sayac DEÐERÝ TANIMLIYORUZ VE 0 A EÞÝTLÝYORUZ
 char asal = 'E'; // KARAKTER DEÐÝÞKEN OLARAK asal DEÐERÝNÝ TANIMLIYORUZ VE "E" KRÝTERÝ BELÝRLÝYORUZ
 
 printf("\n Bir sayi giriniz: "); // KULLANICIDAN DEÐER ALMA
 scanf("%d",&sayi); // DEÐERÝ HAFIZADA TUTMA
 
 for(n=2;n<sayi;n++) // n DEÐERÝNÝ 2 YE EÞÝTLÝYORUZ VE n DEÐERÝ sayi DEÐERÝNDEN DÜÞÜK OLANA KADAR n DEÐERÝNÝ 1 ARTTIRIYORUZ
 {
  if( sayi % n == 0 ) // EÐER sayi DEÐERÝNÝN MODU n DEÐERÝ ÝSE
  {
   asal = 'H'; // asal deðerini "H" KRÝTERÝNE EÞÝTLÝYORUZ
   break;
  }
 }
 
 if( asal == 'E' ) // EÐER asal "E" ÝSE
 {
  printf("\n %d asal sayisindan sonraki ",sayi); // %d KOMUTUYLA sayi DEÐERÝNÝ EKRANA ÇAÐIRIYORUZ
  printf("10 asal sayi :\n"); // EKRANDA GÖSTERME
  sayi= sayi + 1; // sayi DEÐERÝNÝ sayi DEÐERÝNÝ 1 ÝLE TOPLAYIP DEÐER EÞÝTLÝYORUZ
 
  while(sayac < 10) // sayac 10 DAN KÜÇÜK KOÞULU BELÝRLÝYORUZ
  {
   asal = 'E'; // asal DEÐERÝNÝ "E" YE TANIMLIYORUZ
 
   for(n=2;n<sayi;n++) // n DEÐERÝNÝ 2 YE TANIMLIYORUZ n DEÐERÝ sayi DEÐERÝNDEN KÜÇÜK OLANA KADAR n DEÐERÝNE 1 ARTTIR
   {
    if( sayi % n == 0 ) // EÐER sayi DEÐERÝNÝN n ÝLE MODU TAM BÖLÜNÜYORSA
    {
     asal = 'H'; // asal DEÐERÝNÝ "H" OLARAK TANIMLIYORUZ
     break;
    }
   }
   if(asal == 'E' ) // EÐER asal DEÐERÝ E ÝSE
   {
    printf("%d\t",sayi); // sayi DEÐERÝNÝ EKRANA ÇAÐIRIYORUZ
    sayac++; // sayac DEÐERÝNÝ 1 ARTTIRIYORUZ
   }
 
   sayi++; // sayi DEÐERÝNÝ 1 ARTTIRIYORUZ
  }
 }
 else // DEÐÝLSE
  printf("\n %d asal sayi degildir.",sayi); // sayi DEÐERÝNÝ EKRANA ÇAÐIRIYORUZ %d KOMUTU ÝLE
 
 return 0;
}
