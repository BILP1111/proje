#include <stdio.h>
#include <conio.h>
 
int main()
{
 float mesafe=0;
 int zaman=0;
 float hiz= 0;
 //Deðer atama iþlemleri yapýlýr.
 
 printf("\n Gidilecek mesafe (m): ");//kiþiden gidilen mesafe bilgisi istenir.
 scanf("%f",&mesafe);
 
 printf("\n Varis zamani (sn) : ");//kiþiden varýþ zamaný bilgisi istenir.
 scanf("%i",&zaman);
 
 hiz = (float) mesafe/zaman;
 //Formül
 
 printf("\n Hiziniz : %.2f m/s olmalidir.",hiz);
 //Ekrana hýzýný yazar.
 
 getch();
 
}
