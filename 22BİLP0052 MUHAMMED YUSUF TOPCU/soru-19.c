#include <stdio.h>
#include <conio.h>
 
int main()
{
 float sayi1 = 0;
 float sayi2 = 0;
 double sonuc = 0;
 char islem = ' ';
 //Deðer atama iþlemi yapýlýr.
 
 
 printf("\n Basit Hesap Makinasi...");//Toplama,Çýkarma,Bölme,Çarpma iþlemlerini yapar.
 printf("\n =======================");
 
 printf("\n 1. sayi : ");//Birinci sayýyý giriniz.
 scanf("%f",&sayi1);
 
 printf("\n 2. sayi : ");//Ýkinci sayýyý giriniz.
 scanf("%f",&sayi2);
 
 printf("\n Yapilacak islem ( + - / * % ) : ");//Yapýlacak iþlemi seçiniz.
 scanf("%c",&islem);
 
 switch( islem )//Switch kodu ile iþlemler yapýlýr.
 {
  case '+': sonuc = sayi1 + sayi2; break;
  case '-': sonuc = sayi1 - sayi2; break;
  case '*': sonuc = sayi1 * sayi2; break;
  case '/':
  {
  if( sayi2 > 0)//Sayi 2 0 dan büyüktür.
   sonuc = sayi1/sayi2;
  else
   printf("\n HATA : Sifira bolunme hatasi");//Basit Ýþlemlerden birini seçiniz.
  } ; break;
  default: printf("\n Gecerli bir islem belirtmediniz.");
 }
 
 printf("\n\n %.2f %c %.2f = %.3f",sayi1,islem,sayi2,sonuc);//Sonucu ekrana yazar.
 
 getch();
}
