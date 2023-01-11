#include <stdio.h>

int main()
{
    int sayi = 0;
    int cift[10];
    int tek[10];
    int asal[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Sayi giriniz:");
        scanf("%d", &sayi);
        if (sayi % 2 == 0)
        {
            cift[i] = sayi;
        }
        if (sayi % 2 != 0)
        {
            tek[i] = sayi;
        }
        int asalmi = 1;
        for (int j = 2; j < sayi; j++)
        {
            if (sayi % j == 0)
            {
                asalmi = 0;
            }
        }

        if (asalmi)
            asal[i] = sayi;
    }

    printf("Ciftler");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", cift[i]);
    }

    printf("Tekler");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", tek[i]);
    }

    printf("Asallar");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", asal[i]);
    }

    printf("%d", sayi);
    return 0;
}