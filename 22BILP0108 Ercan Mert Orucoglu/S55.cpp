#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(void)
{
      char cumle[100]; // char ve int de�i�kenlerini atad�k
      char ters[100];
 
      int uzunluk = 0, n = 0;

 
      printf("\n Bir metin giriniz : " ); // kullan�c�dan bir de�er isteyip gets ile okuttuk
      gets(cumle);

      uzunluk = strlen(cumle);
 
      for( n = 0 ; n < uzunluk; n++ ) // for ile hesaplamalar� yap�p en sonda sonuclar�n yazmas� i�in printf kulland�m
      {
          ters[n] = cumle[uzunluk-1-n];
      }
      ters[n] = '\0';
      printf("Girilen metin: %s", cumle);
      printf("\tMetnin tersi: %s", ters);
}
