//ÝKÝ NOKTA ARASINDAKÝ MESAFEYÝ BULAN C PROGRAMI

#include <stdio.h>
#include <math.h>

int main()
{
  double x1, y1, x2, y2;

  printf("Birinci noktanin x kordinatini girin: ");
  scanf("%lf", &x1);

  printf("Birinci noktanin y kordinatini girin: ");
  scanf("%lf", &y1);

  printf("Ikinci noktanin x kordinatini girin: ");
  scanf("%lf", &x2);

  printf("Ikinci noktanin y kordinatini girin: ");
  scanf("%lf", &y2);

  double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

  printf("Iki nokta arasindaki mesafe: %lf\n", distance);

  return 0;
}
