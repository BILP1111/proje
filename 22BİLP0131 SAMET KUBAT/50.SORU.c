#include <stdio.h>
#include <string.h>

struct person {
   char name[50];
   int age;
   char car_model[50];
   int car_price;
};

int main(void) {
   struct person p;

   printf("isim girin: ");
   fgets(p.name, 50, stdin);
   // Son karakter olarak satýr sonu karakteri kalýrsa, bunu siler.
   if (p.name[strlen(p.name) - 1] == '\n') {
      p.name[strlen(p.name) - 1] = '\0';
   }

   printf("yas girin: ");
   scanf("%d", &p.age);

   printf("araba model girin: ");
   fgets(p.car_model, 50, stdin);
   // Son karakter olarak satýr sonu karakteri kalýrsa, bunu siler.
   if (p.car_model[strlen(p.car_model) - 1] == '\n') {
      p.car_model[strlen(p.car_model) - 1] = '\0';
   }

   printf("araba fiyat girin: ");
   scanf("%d", &p.car_price);

   printf("\nInformation:\n");
   printf("Name: %s\n", p.name);
   printf("Age: %d\n", p.age);
   printf("Car model: %s\n", p.car_model);
   printf("Car price: %d\n", p.car_price);

   return 0;
}
//Bu program çalýþtýrýldýðýnda, kullanýcýdan bir kiþinin adý, yaþý, arabasýnýn modeli ve fiyatý girmesi bekleniyor.Verilenn bilgilerden sonra ekrana yazdýrýlýr//
