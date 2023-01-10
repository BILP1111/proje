#include <stdio.h>
#include <conio.h>
 
const float pi = 3.14;
 
void main(void)
{
      float alanbul(float);
      float cevrebul(float);
      float yaricap = 0;
      float alan =0;
      float cevre =0;
 
      printf("\n Yaricapi giriniz : " );
      scanf("%f",&yaricap);
      fflush(stdin);
 
      alan = alanbul(yaricap);
      cevre = cevrebul(yaricap);
 
      printf("\n Alani   : %.2f",alan);
      printf("\n Cevresi : %.2f",cevre);
 
      getch();
}
 
 
float alanbul(float r)
{
      float a = 0;
      a = pi * r * r;
      return a;
}
 
 
float cevrebul(float r)
{
      float c = 0;
      c = 2 * pi * r;
      return c;
}
