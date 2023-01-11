#include <stdio.h>

int main()
{
  double yaricap, alan, cevre;
  double pi=3.14;
  //deðer atama

  printf("Lutfen dairenin yaricapini giriniz: ");//kiþiden yarýçap istenir.
  scanf("%lf", &yaricap);

  alan =  pi * (yaricap*yaricap);
  cevre = 2 * pi * yaricap;
//alan ve çevre formülleri
  printf("Dairenin alani: %.2f\n", alan);
  printf("Dairenin cevresi: %.2f\n", cevre);
//Dairenin alanýný ve çevresini ekrana yazar.
  return 0;
}

