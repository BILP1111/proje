// Girilen bir metnin harflerini alfabetik sýraya göre sýralayan program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
#include <string.h> // KÜTÜPHANE TANIMLAMA
 
int main()
{
      char metin[100]; // KARAKTER DEÐÝÞKENÝ OLARAK metin DEÐERÝ TANIMLIYORUZ VE 100 KRÝTERÝ BELÝRLÝYORUZ
      char bosluk; // KARAKTER DEÐÝÞKENÝ OLARAK bosluk DEÐERÝ TANIMLIYORUZ
 
      int uzunluk = 0; // SAYISAL DEÐÝÞKEN OLARAK uzunluk DEÐERÝ TANIMLIYORUZ VE 0 A EÞÝTLÝYORUZ
      int m = 0,n = 0; // SAYISAL DEÐÝÞKEN OLARAK m VE n DEÐERÝ TANIMLIYORUZ VE 0 A EÞÝTLÝYORUZ
 
      printf("\n Bir metin giriniz : " );
      gets(metin);
 
      uzunluk = strlen(metin); // uzunluk DEÐERÝNÝ strlen KOMUTUYLA metin DEÐERÝNÝN UZUNLUÐUNU ALIP uzunluk DEÐERÝNE EÞÝTLÝYORUZ
 
      for(m=0;m<uzunluk-1;m++) // m DEÐERÝ 0 DAN BAÞLAYARAK uzunluk deðerinden küçük olduðunda 1 AZALT VE m DEÐERÝNÝ 1 ARTTIR
      {
            for(n=m+1;n<uzunluk;n++) // n DEÐERÝNÝ m+1 OLARAK TANIMLIYORUZ n DEÐERÝ uzunluk DEÐERÝNE KADAR DEVAM EDECEK VE n DEÐERÝNÝ 1 ARTTIRIYORUZ
          {
              if(metin[m] > metin[n]) // EÐER metin[m} DEÐERÝ metin[n] DEÐERÝNDEN BÜYÜKSE
              {
                  bosluk = metin[m]; // bosluk DEÐERÝNÝ metin[m] DEÐERÝNE EÞÝTLÝYORUZ
                  metin[m] = metin[n]; // metin[m] DEÐERÝNÝ metin[n] DEÐERÝNE EÞÝTLÝYORUZ
                  metin[n] = bosluk; // metin[n] DEÐERÝNÝ bosluk DEÐERÝNE EÞÝTLÝYORUZ
              }
          }
      }
 
      printf("\n Harflerinin siralamasi %s",metin); // %s KOMUTUYLA metin DEÐERÝNÝ EKRANA ÇAÐIRIYORUZ
      return 0;
}
