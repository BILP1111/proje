#include <stdio.h>

int main()
{
    int sayi = 0;
    int faktoriyerl = 0;
    printf("Sayi giriniz:");
    scanf("%d", &sayi);
    int total = 0;
    for (int i = 1; i > 0; i--)
    {
        total += i * sayi;
    }
    printf("%d", total);
    return 0;
}