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
  printf("\n");                               // bir döngü içerisinde 3 satır ve 3 sütunlu bir matrisin elemanlarını ekrana yazdırır. Öncelikle bir "satir" döngüsü oluşturulur ve bu döngü 0'dan başlar ve 3'e kadar devam eder. Daha sonra, "sutun" döngüsü oluşturulur ve bu da 0'dan başlar ve 3'e kadar devam eder. 
                                              //Bu iki döngünün içerisinde, matrisin her bir elemanı ekrana yazdırılır ve satır sonuna geçiş yapılır. Bu sayede, matrisin tüm elemanları satır satır ekrana yazdırılmış olur.
 
  for( sutun=0; sutun<3; sutun++ )
  {
   printf("\t%i",matris[satir][sutun]);
  }
 }
 
 getch();
}
