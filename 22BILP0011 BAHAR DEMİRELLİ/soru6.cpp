#include <stdio.h>

#define PI 3.14159 // Pi say�s� sabit olarak tan�mlan�yor.

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
//scanf fonksiyonu kullan�larak dairenin yar��ap� kullan�c�dan ald�m ve alan ve �evre de�i�kenlerine atad�m. Dairenin alan� ve �evresi, 
//Pi say�s� kullan�larak hesaplad�m ve %.2f kulland�m, alan ve �evre de�i�kenlerinin de�erleri 2 basamakl� ondal�kl� say� olarak ekrana yazd�m.
	
	
