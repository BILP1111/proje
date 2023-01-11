#include <stdio.h>

#define PI 3.14159 // Pi sayýsý sabit olarak tanýmlanýyor.

int main() {
  float yaricap;
  printf("Lutfen dairenin yaricapini girin: ");
  scanf("%f", &yaricap);

  float alan = PI * yaricap * yaricap;
  float cevre = 2 * PI * yaricap;

  printf("Dairenin alani: %.2f\n", alan);
  printf("Dairenin cevresi: %.2f\n", cevre);

  return 0;
}
//scanf fonksiyonu kullanýlarak dairenin yarýçapý kullanýcýdan aldým ve alan ve çevre deðiþkenlerine atadým. Dairenin alaný ve çevresi, 
//Pi sayýsý kullanýlarak hesapladým ve %.2f kullandým, alan ve çevre deðiþkenlerinin deðerleri 2 basamaklý ondalýklý sayý olarak ekrana yazdým.
	
	
