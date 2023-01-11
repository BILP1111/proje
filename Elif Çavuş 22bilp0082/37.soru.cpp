#include <stdio.h>
 
int main()
{
 int sayilar[10];
 int i;
 int eb;
 int ek;
 
 printf("\n En büyük ve En küçük...");
 printf("\n ===================== \n");
 
 for(i=0 ; i < 10; i++)
 {
  printf("%d. Sayi : ",i+1);
  scanf("%d",&sayilar[i]);
 
  if( i == 0 ) 
   ek = sayilar[0];
 
  if( sayilar[i] > eb )
   eb = sayilar[i];
 
  if( sayilar[i] < ek )
   ek = sayilar[i];
 }
 
 printf("\n En Büyük Sayi : %i ",eb); //ekrana yazdıran kod
 printf("\n En Kucuk Sayi : %i ",ek);
 
 return 0;
}