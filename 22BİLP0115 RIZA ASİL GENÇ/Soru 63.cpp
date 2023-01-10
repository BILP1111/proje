#include <stdio.h>
#include <string.h>

int carp(int sayi, int faktoriyel) 
{
    if(sayi - 1 <= 1) return (sayi == 0)?1:faktoriyel;
    sayi--;
    faktoriyel *= sayi;

    return carp(sayi, faktoriyel);
}
int main() 
{
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%i",&sayi);

    printf("%i! = %i\n", sayi, carp(sayi, sayi));
    return 0;
}
