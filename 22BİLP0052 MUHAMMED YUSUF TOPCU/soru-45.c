#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 int matris1[3][3];
 int matris2[3][3];
 int sonuc[3][3];
 
 int satir = 0,sutun = 0;
 
 
 printf("\n Iki matrisin toplanmasi...");//Girdiðiniz iki matrisin toplamý 
 printf("\n ==========================\n");
 
 printf("\n 1. Matris'i giriniz : \n");//1.matris deðerini ister.
 
 for( satir=0 ; satir<3; satir++)
 {
  for( sutun=0; sutun<3; sutun++ )
  {
   printf("Deger [%i][%i] : ",satir+1,sutun+1);
   scanf("%i",&matris1[satir][sutun]);
  }
 }
 
 printf("\n 2. Matris'i giriniz : \n");//1.matris deðerini ister.
 
 for( satir=0 ; satir<3; satir++)
 {
  for( sutun=0; sutun<3; sutun++ )
  {
   printf("Deger [%i][%i] : ",satir+1,sutun+1);//Deðerleriniz.
   scanf("%i",&matris2[satir][sutun]);
  }
 }
 for( satir=0 ; satir<3; satir++)
 {
  for( sutun=0; sutun<3; sutun++ )
  {
   sonuc[satir][sutun] = matris1[satir][sutun] + matris2[satir][sutun];
  }
 }
 
 printf("\n Matrislerin Toplami : \n");//Matrislerin toplamý
 
 for( satir=0 ; satir<3; satir++)
 {
  printf("\n");
  for( sutun=0; sutun<3; sutun++ )
   printf(" %i ",matris1[satir][sutun]);
 
  if( satir == 1 )
   printf(" + ");
  else
   printf(" ");
 
  for( sutun=0; sutun<3; sutun++ )
   printf(" %i ",matris2[satir][sutun]);
 
  if( satir == 1 )
   printf(" = ");
  else
   printf(" ");
 
  for( sutun=0; sutun<3; sutun++ )
   printf(" %i ",sonuc[satir][sutun]);
 }
 getch();
}
