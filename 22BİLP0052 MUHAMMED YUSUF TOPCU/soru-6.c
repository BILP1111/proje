#include <stdio.h>

int main()
{
  double yaricap, alan, cevre;
  double pi=3.14;
  //de�er atama

  printf("Lutfen dairenin yaricapini giriniz: ");//ki�iden yar��ap istenir.
  scanf("%lf", &yaricap);

  alan =  pi * (yaricap*yaricap);
  cevre = 2 * pi * yaricap;
//alan ve �evre form�lleri
  printf("Dairenin alani: %.2f\n", alan);
  printf("Dairenin cevresi: %.2f\n", cevre);
//Dairenin alan�n� ve �evresini ekrana yazar.
  return 0;
}

