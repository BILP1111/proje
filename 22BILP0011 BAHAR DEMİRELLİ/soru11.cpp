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
//Bu kod parçasý, kullanýcýdan iki noktanýn koordinatlarýný ister ve bu noktalar arasýndaki mesafeyi hesaplar. 
//Ýki nokta arasýndaki mesafe, sqrt((x2 - x1)^2 + (y2 - y1)^2).
// Bu formül, x ekseninde ve y ekseninde noktalar arasýndaki uzaklýðý hesaplar ve bunlarýn karelerini toplar.
