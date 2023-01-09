#include <stdio.h>
#include <conio.h>
 
void main(void) // Basit 4 işlem ve moduler aritmetik işlem yapabilen program (SWITCH ILE)
{
 float sayi1 = 0;
 float sayi2 = 0;
 double sonuc = 0;
 char islem = ' ';

 
 printf("\n Hesap Makinasi...");
 printf("\n =======================");
 
 printf("\n 1. sayi : ");
 scanf("%f",&sayi1);
 fflush(stdin);
 
 printf("\n 2. sayi : ");
 scanf("%f",&sayi2);
 fflush(stdin);
 
 printf("\n Yapilacak islem ( + - / * % ) : ");
 scanf("%c",&islem);
 fflush(stdin);
 
 if (islem == '+') {
    sonuc = sayi1 + sayi2;
 } else if (islem == '-') {
    sonuc = sayi1 - sayi2;
 } else if (islem == '*') {
    sonuc = sayi1 * sayi2;
 } else if (islem == '/') {
    sonuc = sayi1/sayi2;
 } else {
    printf("\n Gecerli bir komut girmedin");
 }

 printf("\n\n %.2f %c %.2f = %.3f",sayi1,islem,sayi2,sonuc);
 
 getch();
}