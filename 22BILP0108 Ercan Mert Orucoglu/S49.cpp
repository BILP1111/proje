#include <stdio.h>

int main(void)
{
    char kelime[10]; // char ile kelime de�ikeni atad�m max 10 karakterlik

    printf("\n Kelimeyi girin : "); // kullan�c�dan bir de�er girmesini istedim
    gets(kelime);

    printf("\n Girilen Kelime : %s",kelime); // girilen de�eri ekrana yazd�rd�m
}
