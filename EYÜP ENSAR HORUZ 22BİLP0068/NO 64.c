#include <stdio.h>
#include <conio.h>
 
const float pi = 3.14;  // PROGRAMA P� SAYISININ 3,14 OLDUPUNU TANITTIK
 
void main(void) // BO�
{
      float alanbul(float);
      float cevrebul(float); 
      float yaricap = 0;      // 
      float alan =0;
      float cevre =0;
 
      clrscr();
 
      printf("\n Yaricapi giriniz : " );  // YARI�A�I G�RD�K VE FORM�LE G�RE ARKASINDA ��LEM YAPMASINI SA�LADIK
      scanf("%f",&yaricap);
      fflush(stdin);
 
      alan = alanbul(yaricap);
      cevre = cevrebul(yaricap);
 
      printf("\n Alani   : %.2f",alan);  // GEREKL� FORM�LLER�N ALAN VE �EVREY� BULDU�UNU TANIMLADIK
      printf("\n Cevresi : %.2f",cevre);
 
      getch();
}
 
 
float alanbul(float r)     // ALAN BULMAK ���N S�STEM�N YAPMASI GEREKEN ��LEMLER� KODLADIK
{
      float a = 0;
      a = pi * r * r;
      return a;
}
 
 
float cevrebul(float r)  // �EVRE BULMAK ���N S�STEM�N YAPMASI GEREKEN ��LEMLER� KODLADIK
{
      float c = 0;
      c = 2 * pi * r;
      return c;
}
