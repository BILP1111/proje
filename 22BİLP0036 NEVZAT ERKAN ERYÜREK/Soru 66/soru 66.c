#include <stdio.h>
#include <conio.h>
 
struct kisi
{
      char ad[25];
      int yas;
};
 
struct araba
{
      char model[25];
      float fiyat;
};
 
void main(void)
{
      struct kisi k;
      struct araba a;
 
      printf("\n Kisinin " );
      printf("\n Adi     : "); gets(k.ad); fflush(stdin);
      printf("\n Yas     : "); scanf("%i",&k.yas); fflush(stdin);
 
      printf("\n Arabanin ");
      printf("\n Modeli   : "); gets(a.model); fflush(stdin);
      printf("\n Fiyati   : "); scanf("%f",&a.fiyat); fflush(stdin);
 
      printf("\n %s'in %s model arabasinin fiyati %.2f TL. dir.",k.ad,a.model,a.fiyat);
 
      getch();
}
