#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 int matris[3][3];
 int satir = 0,sutun = 0;
 
 clrscr();
 
 printf("\n Matris Programý");
 printf("\n ==================\n");
 
 for( satir=0 ; satir<3; satir++)  // döngü boyunca 0 ve 3 arasýnda döner
 { 
  for( sutun=0; sutun<3; sutun++ )
  {
   printf("Deger [%i][%i] : ",satir+1,sutun+1);
   scanf("%i",&matris[satir][sutun]);    // girilen deðerlerin arkaplanda yapacaðý iþlemler tanýtýlýr
   fflush(stdin);
  }
 }
 
 printf("\n Matrisiniz : \n");      // matris ekrana yazdýrýlýr      
 
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
