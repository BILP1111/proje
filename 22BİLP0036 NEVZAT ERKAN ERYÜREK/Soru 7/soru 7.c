#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void main(void)
{
 float mesafe=0;
 int zaman=0;
 float hiz= 0;

 printf("\n Gidilecek mesafe (m): ");
 scanf("%f",&mesafe);
 fflush(stdin);
 
 printf("\n Varis zamani (sn) : ");
 scanf("%i",&zaman);
 fflush(stdin);
 
 hiz = (float) mesafe/zaman;
 
 printf("\n Hiziniz : %.2f m/s olmalidir.",hiz);
 
 getch();
 
}
