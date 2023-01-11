#include <stdio.h>


int main() {
  int yas; // veriler için
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
//Bu programda, scanf fonksiyonu kullanýlarak kullanýcýdan yaþ deðeri alýnýr ve aylar, haftalar, günler, saatler, dakikalar ve saniyeler deðiþkenlerine atanýr. 
//Daha sonra, bu deðiþkenlerin deðerleri ekrana yazdýrýlýr.



