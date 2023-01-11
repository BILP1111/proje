// Basit dört iþlem ve moduler aritmetik islemi yapabilen program (SWITCH ile).

#include <stdio.h> // KÜTÜPHANE TANIMLAMA
#include <conio.h> // KÜTÜPHANE TANIMLAMA
 
int main()
{
 float sayi1 = 0; // ONDALIKLI DEÐER TANIMLAMA
 float sayi2 = 0; // ONDALIKLI DEÐER TANIMLAMA
 double sonuc = 0; // ONDALIKLI DEÐER TANIMLAMA
 char islem = ' '; // KARAKTER TANIMLAMA
 char oper = {'+','-','*','/'};
 
 
 printf("\n Basit Hesap Makinasi...");
 printf("\n =======================");
 
 printf("\n 1. sayi : ");
 scanf("%f",&sayi1);
 
 printf("\n 2. sayi : ");
 scanf("%f",&sayi2);
 
 printf("\n Yapilacak islem ( + - / * % ) : ");
 scanf("%c",&oper);
 
 switch(islem)
 {
  case '+': sonuc = sayi1 + sayi2; break;
  case '-': sonuc = sayi1 - sayi2; break;
  case '*': sonuc = sayi1 * sayi2; break;
  case '/': sonuc = sayi1 / sayi2; break;
}
 return 0;
}
