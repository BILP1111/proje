#include <stdio.h>


int main() {
  int yas; // veriler i�in
  printf("Lutfen yasinizi girin: ");
  scanf("%d", &yas);

  int aylar = yas * 12;
  int haftalar = yas * 52;
  int gunler = yas * 365;
  int saatler = gunler * 24;
  int dakikalar = saatler * 60;
  int saniyeler = dakikalar * 60;

  printf("Yasiniz aylar olarak: %d aydir\n", aylar);
  printf("Yasiniz haftalar olarak: %d haftadir\n", haftalar);
  printf("Yasiniz gunler olarak: %d gundur\n", gunler);
  printf("Yasiniz saatler olarak: %d saattir\n", saatler);
  printf("Yasiniz dakikalar olarak: %d dakikadir\n", dakikalar);
  printf("Yasiniz saniyeler olarak: %d saniyedir\n", saniyeler);

  return 0;
}
//Bu programda, scanf fonksiyonu kullan�larak kullan�c�dan ya� de�eri al�n�r ve aylar, haftalar, g�nler, saatler, dakikalar ve saniyeler de�i�kenlerine atan�r. 
//Daha sonra, bu de�i�kenlerin de�erleri ekrana yazd�r�l�r.



