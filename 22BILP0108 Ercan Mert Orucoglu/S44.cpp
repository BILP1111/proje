#include <stdio.h>
#include <conio.h>
 
 // 3*3lük bir matrisin deðerlerini kullanýcýya soran ve matrisi ekrana yazdýran
 // program
 
int main(void)
{
 int matris[3][3];
 int satir = 0,sutun = 0;
 
 printf("Matris Programi");
 printf("\n =");
 
 for( satir=0 ; satir<3; satir++)
 {
  for( sutun=0; sutun<3; sutun++ )
  {
   printf("Deger [%i][%i] : ",satir+1,sutun+1);
   scanf("%i",&matris[satir][sutun]);
   fflush(stdin);
  }
 }
 printf("\n Matris: \n");
 
 for( satir=0 ; satir<3; satir++)
 {
  printf("\n");
  for( sutun=0; sutun<3; sutun++ )
  {
   printf("\t%i",matris[satir][sutun]);
  }
 }
}
