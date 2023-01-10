#include <stdio.h>

int main(void) {
   int age;
   int days, weeks, months;
   int hours, minutes, seconds;

   printf("bir yas giriniz: ");
   scanf("%d", &age);

   // Yaþý gün, hafta ve ay olarak hesaplar.
   days = age * 365;
   weeks = days / 7;
   months = age * 12;

   // Yaþý saat, dakika ve saniye olarak hesaplar.
   hours = days * 24;
   minutes = hours * 60;
   seconds = minutes * 60;

   // Hesaplanan deðerleri ekrana yazdýrýr.
   printf("Age in days: %d\n", days);
   printf("Age in weeks: %d\n", weeks);
   printf("Age in months: %d\n", months);
   printf("Age in hours: %d\n", hours);
   printf("Age in minutes: %d\n", minutes);
   printf("Age in seconds: %d\n", seconds);

   return 0;
}
//Kullanýcýdan bir yaþ eklenmessi  beklenir.Girilen yaþýn gün, hafta, ay, saat, dakika ve saniye olarak deðerleri hesaplanýr ve ekrana yazdýrýlýr.//
