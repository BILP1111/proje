#include <stdio.h>
#include <conio.h>
 
int main()
{
 float mesafe=0;
 int zaman=0;
 float hiz= 0;
 //De�er atama i�lemleri yap�l�r.
 
 printf("\n Gidilecek mesafe (m): ");//ki�iden gidilen mesafe bilgisi istenir.
 scanf("%f",&mesafe);
 
 printf("\n Varis zamani (sn) : ");//ki�iden var�� zaman� bilgisi istenir.
 scanf("%i",&zaman);
 
 hiz = (float) mesafe/zaman;
 //Form�l
 
 printf("\n Hiziniz : %.2f m/s olmalidir.",hiz);
 //Ekrana h�z�n� yazar.
 
 getch();
 
}
