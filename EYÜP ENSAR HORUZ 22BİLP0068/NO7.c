#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void main(void)  // bo� 
{
 float mesafe=0;  
 int zaman=0;
 float hiz= 0;    // h�z zaman ve mesafe kavramlar�n� programa tan�tt�k
 
 clrscr();
 
 printf("\n Gidilecek mesafeyi giriniz : ");  // girilen mesafe ve zaman de�erlerini programa tan�tt�k
 scanf("%f",&mesafe);
 fflush(stdin);
 
 printf("\n Varis zamanini giriniz : ");
 scanf("%i",&zaman);
 fflush(stdin);
 
 hiz = (float) mesafe/zaman;  // mesafe ve zaman�n b�l�nmesi ile h�z�n verdi�ini programa tan�tt�k
 
 printf("\n Hiziniz : %.2f m/s olmalidir.",hiz);  // ekran ��kt�s�n� g�sterdik
 
 getch();
 
}
