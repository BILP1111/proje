#include <stdio.h>
#include <conio.h>
 
int main()
{
 int matris[3][3];
 int satir = 0,sutun = 0;
 
 
 for( satir=0 ; satir<3; satir++)
 {
  for( sutun=0; sutun<3; sutun++ )
  {
   printf("Deger [%i][%i] : ",satir+1,sutun+1);
   scanf("%i",&matris[satir][sutun]);
   
  }
 }
 
 printf("\n Matrisiniz : \n");
 
 for( satir=0 ; satir<3; satir++)
 {
  printf("\n");                               // bir d�ng� i�erisinde 3 sat�r ve 3 s�tunlu bir matrisin elemanlar�n� ekrana yazd�r�r. �ncelikle bir "satir" d�ng�s� olu�turulur ve bu d�ng� 0'dan ba�lar ve 3'e kadar devam eder. Daha sonra, "sutun" d�ng�s� olu�turulur ve bu da 0'dan ba�lar ve 3'e kadar devam eder. 
                                              //Bu iki d�ng�n�n i�erisinde, matrisin her bir eleman� ekrana yazd�r�l�r ve sat�r sonuna ge�i� yap�l�r. Bu sayede, matrisin t�m elemanlar� sat�r sat�r ekrana yazd�r�lm�� olur.
 
  for( sutun=0; sutun<3; sutun++ )
  {
   printf("\t%i",matris[satir][sutun]);
  }
 }
 
 getch();
}
