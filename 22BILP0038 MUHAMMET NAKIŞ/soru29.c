// * karakteri ile piramit olusturan program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
 
void bosluk(int);
 
void main(void)
{
 int cizgi= 0; // SAYÝSAL DEÐÝÞKEN OLARAK cizgi DEÐERÝ TANIMLIYORUZ VE 0 A EÞÝTLÝYORUZ
 int satir = 0; // SAYÝSAL DEÐÝÞKEN OLARAK satir DEÐERÝ TANIMLIYIYORUZ VE 0 A EÞÝTLÝYORUZ
 int sayi = 0; // SAYÝSAL DEÐÝÞKEN OLARAK sayi DEÐERÝ TANIMLIYORUZ VE 0 A EÞÝTLÝYORUZ
 int s = 40; // SAYÝSAL DEÐÝÞKEN OLARAK s DEÐERÝ TANIMLIYORUZ VE 40 A EÞÝTLÝYORUZ
 
 
 printf("\n Ne kadar cizgi kullanilsin: "); // KULLANICIDAN DEÐER ALMA
 scanf("%d",&cizgi); // DEÐERÝ HAFIZADA TUTMA
 
 if(cizgi > 20 ) // EÐER cizgi DEÐERÝ 20 DEN BÜYÜKSE
 {
  printf("\n Cizgi sayisi cok fazla! "); // EKRANA YAZDIRMA
 }
 
 for(satir =1;satir<=cizgi;satir++) // satir DEÐERÝNÝ 1 E EÞÝTLÝYORUZ satir DEÐERÝ cizgi DEÐERÝNDEN KÜÇÜK VE EÞÝT OLANA KADAR satir DEÐERÝNÝ 1 ARTTIR
 {
  bosluk(s); // 
 
  for(sayi= 1; sayi <= satir;sayi++) // sayi DEÐERÝNÝ 1 E EÞÝTLÝYORUZ sayi DEÐERÝ satir DEÐERÝNE KÜÇÜK VE EÞÝT OLANA KADAR SAYÝ DEÐERÝNÝ 1 ARTTIRIYORUZ
  for(sayi= satir-1; sayi >= 1;sayi--) // sayi DEÐERÝNÝ satir-1 DEÐERÝNE EÞÝTLÝYORUZ sayi DEÐERÝ 1 DEÐERÝNDEN BÜYÜK VE EÞÝT OLANA KADAR sayi DEÐERÝNÝ 1 AZALTIYORUZ
 
  s = s - 2; // s DEÐERÝNÝ s - 2 DEÐERÝNE EÞÝTLÝYORUZ
 }
}
 
void bosluk(int t)
{
 int sayac = 0; // SAYISAL DEÐÝÞKENÝ OLARKA sayac DEÐERÝ TANIMLIYORUZ VE 0 A EÞÝTLÝYORUZ
 for(sayac = 1 ; sayac <= t;sayac++) // sayac DEÐERÝNÝ 1 E EÞÝTLÝYORUZ sayac DEÐERÝ t DEÐERÝNDEN KÜÇÜK VE EÞÝT OLANA KDAR sayac DEÐERÝNÝ 1 ARTTIRIYORUZ
 putchar(' '); // CD DEÐÝÞKEN DEÐERÝNÝ EKRANA YAZAR
}
