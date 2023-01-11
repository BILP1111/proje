#include <stdio.h>

int main()
{
    int sayi = 0;
    printf("Sayi giriniz:");
    scanf("%d", &sayi);
    int asalmi = 1;
    for (int i = 2; i < sayi; i++)
    {
        if (sayi % i == 0)
        {
            asalmi = 0;
        }
    }
    if (asalmi)
    {
        int count = 0;
        while (count < 10)
        {
            for (int i = 2; i < sayi; i++)
            {
                if (sayi % i == 0)
                {
                    sayi += 1;
                }
                else
                {
                    count += 1;
                    printf("%d", sayi);
                }
            }
        }
    }
    else
    {
        printf("Asal sayi degildir.");
    }
    printf("%d", sayi);
    return 0;
}