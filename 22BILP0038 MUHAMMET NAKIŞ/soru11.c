// Koordinatlarý verilen iki nokta arasýndaki mesafeyi bulan program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
#include <math.h> // KÜTÜPHANE TANIMLAMA
 
int main()
{
 int x1 = 0, y1 = 0; // SAYISAL DEÐÝÞKEN OLARAK x1 y1 DEÐERLERÝ TANIMLAYIP 0 A EÞÝTLÝYORUZ
 int x2 = 0, y2 = 0; // SAYISAL DEÐÝÞKEN OLARAK x2 y2 DEÐERLERÝ TANIMLAYIP 0 A EÞÝTLÝYORUZ
 float mesafe = 0 ; // ONDALIKLI SAYI DEÐÝÞKENÝ OLARAK mesafe DEÐERÝ TANIMLIYORUZ VE 0 A EÞÝTLÝYORUZ
 
 printf("\n 1. Nokta (X Y): "); // KULLANICIDAN DEÐERLERÝ ALIYORUZ
 scanf("%d %d",&x1,&y1); // DEÐERLERÝ HAFIZADA TUTUYORUZ
 
 printf("\n 2. Nokta (X Y): "); // KULLANICIDAN DEÐERLERÝ ALIYORUZ
 scanf("%d %d",&x2,&y2); // DEÐERLERÝ HAFIZADA TUTUYORUZ
 
 mesafe = sqrt(pow((y2-y1),2) + pow((x2-x1),2)); // sqrt KOMUTUYLA KAREKÖK DEÐERLERÝNÝ ALIYORUZ ÖNCELÝKLE DAHA SONRASINDA pow KOMUTUNU KULLANARAK DEÐERLERÝN KARESÝNE ALIYORUZ DAHA SONRA 4 ÝÞLEM OLARKA DEÐELERÝN ÝÞLEMLERÝNÝ YAPIYORUZ DAHA SONRA BU DEÐERLERÝN SONUCUNU 
 // mesafe DEÐERÝNE EÞÝTLÝYORUZ
 printf("\n Mesafe : %.2f",mesafe); // mesafe DEÐERÝNÝ EKRANA ÇAÐIRIYORUZ 2f YAPMAMIZIN SEBEBÝ VÝRGÜLDEN SONRA KAÇ BASAMAÐIN GÖZÜKMESÝNÝ GÖSTERÝYORUZ   
 
 return 0;
}
