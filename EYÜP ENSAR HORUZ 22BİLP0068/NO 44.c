#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 int matris[3][3];
 int satir = 0,sutun = 0;
 
 clrscr();
 
 printf("\n Matris Program�");
 printf("\n ==================\n");
 
 for( satir=0 ; satir<3; satir++)  // d�ng� boyunca 0 ve 3 aras�nda d�ner
 { 
  for( sutun=0; sutun<3; sutun++ )
  {
   printf("Deger [%i][%i] : ",satir+1,sutun+1);
   scanf("%i",&matris[satir][sutun]);    // girilen de�erlerin arkaplanda yapaca�� i�lemler tan�t�l�r
   fflush(stdin);
  }
 }
 
 printf("\n Matrisiniz : \n");      // matris ekrana yazd�r�l�r      
 
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
