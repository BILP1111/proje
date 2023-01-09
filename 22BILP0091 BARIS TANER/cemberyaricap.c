#include <stdio.h>

int main() { // �emberin yar��ap�n� bulan program
// değişkenlerimizi alıp pi değişkeni sayesisnde alan ve çevreyi hesaplayıruz
  int yaricap;
  float alan, cevre, pi=3.14;
  printf("Yaricapi girin:");
  scanf("%d",&yaricap);
  alan =  pi*yaricap*yaricap;
  cevre = 2*pi*yaricap;
  printf("alan: %f \ncevre: %f", alan, cevre);
  return 0;
}
