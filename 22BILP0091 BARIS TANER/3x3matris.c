#include <stdio.h>
#include <conio.h>
 
void main(void) // 3*3lük bir matrisin değerlerini kullanıcıya soran ve matrisi ekrana yazdıran program
{
 int matris[3][3];
 int satir = 0,sutun = 0;
 

 
 printf("\n Matris Programi...");
 printf("\n ==================\n");
 
 for( satir=0 ; satir<3; satir++)
 {
  for( sutun=0; sutun<3; sutun++ )
  {
   printf("Deger [%i][%i] : ",satir+1,sutun+1);
   scanf("%i",&matris[satir][sutun]);
   fflush(stdin);
  }
 }
 
 printf("\n Matrisiniz : \n");
 
 for( satir=0 ; satir<3; satir++)
 {
  printf("\n");
 
  for( sutun=0; sutun<3; sutun++ )
  {
   printf("\t%i",matris[satir][sutun]);
  }
 }
 
 getch();
}