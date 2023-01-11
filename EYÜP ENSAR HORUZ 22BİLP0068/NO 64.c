#include <stdio.h>
#include <conio.h>
 
const float pi = 3.14;  // PROGRAMA PÝ SAYISININ 3,14 OLDUPUNU TANITTIK
 
void main(void) // BOÞ
{
      float alanbul(float);
      float cevrebul(float); 
      float yaricap = 0;      // 
      float alan =0;
      float cevre =0;
 
      clrscr();
 
      printf("\n Yaricapi giriniz : " );  // YARIÇAÞI GÝRDÝK VE FORMÜLE GÖRE ARKASINDA ÝÞLEM YAPMASINI SAÐLADIK
      scanf("%f",&yaricap);
      fflush(stdin);
 
      alan = alanbul(yaricap);
      cevre = cevrebul(yaricap);
 
      printf("\n Alani   : %.2f",alan);  // GEREKLÝ FORMÜLLERÝN ALAN VE ÇEVREYÝ BULDUÐUNU TANIMLADIK
      printf("\n Cevresi : %.2f",cevre);
 
      getch();
}
 
 
float alanbul(float r)     // ALAN BULMAK ÝÇÝN SÝSTEMÝN YAPMASI GEREKEN ÝÞLEMLERÝ KODLADIK
{
      float a = 0;
      a = pi * r * r;
      return a;
}
 
 
float cevrebul(float r)  // ÇEVRE BULMAK ÝÇÝN SÝSTEMÝN YAPMASI GEREKEN ÝÞLEMLERÝ KODLADIK
{
      float c = 0;
      c = 2 * pi * r;
      return c;
}
