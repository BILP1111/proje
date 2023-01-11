#include <stdio.h>

int main(void)
{
    char kelime[10]; // char ile kelime deþikeni atadým max 10 karakterlik

    printf("\n Kelimeyi girin : "); // kullanýcýdan bir deðer girmesini istedim
    gets(kelime);

    printf("\n Girilen Kelime : %s",kelime); // girilen deðeri ekrana yazdýrdým
}
