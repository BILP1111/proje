#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void main(void)  // boþ 
{
 float mesafe=0;  
 int zaman=0;
 float hiz= 0;    // hýz zaman ve mesafe kavramlarýný programa tanýttýk
 
 clrscr();
 
 printf("\n Gidilecek mesafeyi giriniz : ");  // girilen mesafe ve zaman deðerlerini programa tanýttýk
 scanf("%f",&mesafe);
 fflush(stdin);
 
 printf("\n Varis zamanini giriniz : ");
 scanf("%i",&zaman);
 fflush(stdin);
 
 hiz = (float) mesafe/zaman;  // mesafe ve zamanýn bölünmesi ile hýzýn verdiðini programa tanýttýk
 
 printf("\n Hiziniz : %.2f m/s olmalidir.",hiz);  // ekran çýktýsýný gösterdik
 
 getch();
 
}
