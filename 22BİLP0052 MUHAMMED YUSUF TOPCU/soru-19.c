#include <stdio.h>
#include <conio.h>
 
int main()
{
 float sayi1 = 0;
 float sayi2 = 0;
 double sonuc = 0;
 char islem = ' ';
 //De�er atama i�lemi yap�l�r.
 
 
 printf("\n Basit Hesap Makinasi...");//Toplama,��karma,B�lme,�arpma i�lemlerini yapar.
 printf("\n =======================");
 
 printf("\n 1. sayi : ");//Birinci say�y� giriniz.
 scanf("%f",&sayi1);
 
 printf("\n 2. sayi : ");//�kinci say�y� giriniz.
 scanf("%f",&sayi2);
 
 printf("\n Yapilacak islem ( + - / * % ) : ");//Yap�lacak i�lemi se�iniz.
 scanf("%c",&islem);
 
 switch( islem )//Switch kodu ile i�lemler yap�l�r.
 {
  case '+': sonuc = sayi1 + sayi2; break;
  case '-': sonuc = sayi1 - sayi2; break;
  case '*': sonuc = sayi1 * sayi2; break;
  case '/':
  {
  if( sayi2 > 0)//Sayi 2 0 dan b�y�kt�r.
   sonuc = sayi1/sayi2;
  else
   printf("\n HATA : Sifira bolunme hatasi");//Basit ��lemlerden birini se�iniz.
  } ; break;
  default: printf("\n Gecerli bir islem belirtmediniz.");
 }
 
 printf("\n\n %.2f %c %.2f = %.3f",sayi1,islem,sayi2,sonuc);//Sonucu ekrana yazar.
 
 getch();
}
