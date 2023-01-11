/* varış mesafesi ve zamanı alınan mesafeyi gidlecek yolu hesaplayan program */
#include <stdio.h>

 
main()
{
 float mesafe;
 int zaman;
 float hiz;
 
 
 
 printf("\n Gidilecek mesafe (m): ");
 scanf("%f",&mesafe);
 
 
 printf("\n Varis zamani (sn) : ");
 scanf("%d",&zaman);
 
 
 hiz =  mesafe/zaman;
 
 printf("\n Hiziniz : %.2f m/s olmalidir.",hiz);
 
 getch();
 
}