#include <stdio.h>
 
int main() {
  float mesafe, zaman; // Float veri t�r�, say�lar�n ondal�k k�s�mlar�n�n da dahil edilebilece�i bir veri t�r�d�r ve genellikle ger�ek say�lar�n tutuldu�u yerlerde kullan�l�r.
  printf("Lutfen gidilecek mesafeyi girin (km): ");
  scanf("%f", &mesafe);
  printf("Lutfen varis zamanini girin (saat): ");
  scanf("%f", &zaman);

  float hiz = mesafe / zaman;
  printf("Olmasi gereken hiz: %.2f km/saat\n", hiz);

  return 0;
}
//scanf fonksiyonu kullan�larak gidilecek mesafe ve var�� zaman�n� kullan�c�dan ald�m ve h�z de�i�kenine atad�m. 
//Daha sonra, h�z de�i�keninin de�eri %.2f kullan�larak, 2 basamakl� ondal�kl� say� olarak ekrana yazd�rd�m.
