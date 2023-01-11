#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(void)
{
      char cumle[100]; // char ve int deðiþkenlerini atadýk
      char ters[100];
 
      int uzunluk = 0, n = 0;

 
      printf("\n Bir metin giriniz : " ); // kullanýcýdan bir deðer isteyip gets ile okuttuk
      gets(cumle);

      uzunluk = strlen(cumle);
 
      for( n = 0 ; n < uzunluk; n++ ) // for ile hesaplamalarý yapýp en sonda sonuclarýn yazmasý için printf kullandým
      {
          ters[n] = cumle[uzunluk-1-n];
      }
      ters[n] = '\0';
      printf("Girilen metin: %s", cumle);
      printf("\tMetnin tersi: %s", ters);
}
