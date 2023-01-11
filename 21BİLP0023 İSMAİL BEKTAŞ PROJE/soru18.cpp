#include <stdio.h>
#include <conio.h>
 
 main(void)
{
 float sayi1 = 0;
 float sayi2 = 0;
 double sonuc = 0;
 char islem = ' ';
 
 printf("\n Basit Hesap Makinasi...");
 printf("\n =======================");
 
 printf("\n 1. Sayi : ");
 scanf("%f",&sayi1);
 
 printf("\n 2. Sayi : ");
 scanf("%f",&sayi2);

 printf("\n Yapilacak islemi giriniz ( + - / * % ) : ");
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
   printf("\n Hata: Sifira bolme hatasi");
 }
 else
  printf("\n Gecerli bir islem isareti girmediniz.");
 
 printf("\n\n %.2f %c %.2f = %.3f",sayi1,islem,sayi2,sonuc);
 
 getch();
}
