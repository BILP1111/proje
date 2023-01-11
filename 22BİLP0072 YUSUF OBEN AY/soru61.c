
#include <stdio.h>
int asalmi(int sayi)
{
    int asalmi = 1;
    for (int i = 0; i < sayi; i++)
    {
        if (sayi % i == 0)
        {
            asal = 0;
        }
    }
    return asalmi;
}

int main()
{
    int sayi = 0;
    printf("Sayi giriniz:");
    scanf("%d", &sayi);

    if (asalmi(sayi))
    {
        printf("Asal sayi");
    }
    else
    {
        printf("Asal sayi degil");
    }
    return 0;
}