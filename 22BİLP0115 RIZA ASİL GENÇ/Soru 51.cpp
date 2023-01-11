#include <stdio.h>
#include <string.h>

int main() 
{
    char ad[255];
    printf("Adinizi girin: ");
    scanf("%s", ad);

    char soyad[255];
    printf("Soyadinizi girin: ");
    scanf("%s", soyad);

    printf("Adiniz soyadiniz: %s %s", ad, soyad);
    return 0;
}
