/* alınan 10 sayıyı çift tek ve asal olmak üzere listeleyen program */


#include <stdio.h>
#include <stdbool.h>

int main(void) {
int sayilar[10];
int i, j;

// Kullanıcıdan sayıları al
printf("10 tane sayi giriniz:\n");
for (i = 0; i < 10; i++) {
scanf("%d", &sayilar[i]);
}

printf("Tek sayilar:\n");
for (i = 0; i < 10; i++) {
if (sayilar[i] % 2 != 0) {
printf("%d\n", sayilar[i]);
}
}

printf("cift sayilar:\n");
for (i = 0; i < 10; i++) {
if (sayilar[i] % 2 == 0) {
printf("%d\n", sayilar[i]);
}
}

printf("Asal sayilar:\n");
for (i = 0; i < 10; i++) {
bool asal = true;
for (j = 2; j < sayilar[i] / 2; j++) {
if (sayilar[i] % j == 0) {
asal = false;
break;
}
}
if (asal) {
printf("%d\n", sayilar[i]);
}
}

return 0;
}