#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 char devammi;
 float sayi1 = 0;
 float sayi2 = 0;
 double sonuc = 0;
 char islem = ' ';
 do
 {
 
  printf("\n Basit Hesap Makinasi...");
  printf("\n =======================");
 
  printf("\n 1. sayi : ");
  scanf("%f",&sayi1);
  fflush(stdin);
 
  printf("\n 2. sayi : ");
  scanf("%f",&sayi2);
  fflush(stdin);
 
  printf("\n Yapilacak islem ? ( + - / * % ): ");
  scanf("%c",&islem);
  fflush(stdin);
  if( islem == '+')
   sonuc = sayi1 + sayi2;
  else if( islem == '-')
   sonuc = sayi1 - sayi2;
  else if( islem == '*')
   sonuc = sayi1 * sayi2;
  else if( islem == '/')
  {
   if( sayi2 > 0)
    sonuc = sayi1/sayi2;
   else
    printf("\n HATA: Sifira bolunme hatasi.");
  }
  else
   printf("\n Gecerli bir islem belirtmediniz.");
 
  printf("\n\n %.2f %c %.2f = %.3f",sayi1,islem,sayi2,sonuc);
 
  printf("\n\n Baska hesaplama yapacak misiniz?(E/H): ");
  devammi = getchar();
  fflush(stdin);
 }
 while(devammi == 'E' || devammi == 'e');
}
