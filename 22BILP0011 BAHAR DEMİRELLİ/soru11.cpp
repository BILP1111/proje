#include<stdio.h>
#include <math.h>
int main()
{
   double x1, y1, x2, y2, mesafe;

   printf("Lutfen ilk noktanin x koordinatini giriniz: ");
   scanf("%lf", &x1);

   printf("Lutfen ilk noktanin y koordinatini giriniz: ");
   scanf("%lf", &y1);

   printf("Lutfen ikinci noktanin x koordinatini giriniz: ");
   scanf("%lf", &x2);

   printf("Lutfen ikinci noktanin y koordinatini giriniz: ");
   scanf("%lf", &y2);

   mesafe = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

   printf("Iki nokta arasindaki mesafe: %f\n", mesafe);

   return 0;
}
//Bu kod par�as�, kullan�c�dan iki noktan�n koordinatlar�n� ister ve bu noktalar aras�ndaki mesafeyi hesaplar. 
//�ki nokta aras�ndaki mesafe, sqrt((x2 - x1)^2 + (y2 - y1)^2).
// Bu form�l, x ekseninde ve y ekseninde noktalar aras�ndaki uzakl��� hesaplar ve bunlar�n karelerini toplar.
