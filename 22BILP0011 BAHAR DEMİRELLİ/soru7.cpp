#include <stdio.h>
 
int main() {
  float mesafe, zaman; // Float veri türü, sayýlarýn ondalýk kýsýmlarýnýn da dahil edilebileceði bir veri türüdür ve genellikle gerçek sayýlarýn tutulduðu yerlerde kullanýlýr.
  printf("Lutfen gidilecek mesafeyi girin (km): ");
  scanf("%f", &mesafe);
  printf("Lutfen varis zamanini girin (saat): ");
  scanf("%f", &zaman);

  float hiz = mesafe / zaman;
  printf("Olmasi gereken hiz: %.2f km/saat\n", hiz);

  return 0;
}
//scanf fonksiyonu kullanýlarak gidilecek mesafe ve varýþ zamanýný kullanýcýdan aldým ve hýz deðiþkenine atadým. 
//Daha sonra, hýz deðiþkeninin deðeri %.2f kullanýlarak, 2 basamaklý ondalýklý sayý olarak ekrana yazdýrdým.
