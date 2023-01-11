#include <stdio.h>
#include <conio.h>
 
  main(void)
{
 float yaricap = 0;
 double alan = 0;
 double cevre = 0;
 
 printf("\n Dairenin Alani ve Cevresi");
 printf("\n =========================");
 
 printf("\n Dairenin yaricapini giriniz: ");
 scanf("%f",&yaricap);
 
 alan = 3.14 * yaricap * yaricap;
 cevre = 2 * 3.14 * yaricap;
 
 printf("\n Dairenin Alani : %.4f ",alan);
 printf("\n Dairenin Cevresi : %.4f",cevre);
 
 getch();
}
