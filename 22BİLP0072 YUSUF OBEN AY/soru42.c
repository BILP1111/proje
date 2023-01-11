#include <stdio.h>

int main()
{
    int sayi = 0;
    int sayilar[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Sayi giriniz:");
        scanf("%d", &sayi);
        sayilar[i] = sayi;
    }

    printf("1. Buyukten Kucuge\n");
    printf("2. Kucukten Buyuge\n");
    scanf("%d", &sayi);

    if (sayi == 1)
    {
        for (int i = 0; i < 10; i++)
        {
            int i, j, min_idx;

            // One by one move boundary of unsorted subarray
            for (i = 0; i < 10 - 1; i++)
            {

                // Find the minimum element in unsorted array
                min_idx = i;
                for (j = i + 1; j < 10; j++)
                    if (sayilar[j] < sayilar[min_idx])
                        min_idx = j;

                // Swap the found minimum element
                // with the first element
                int temp = sayilar[min_idx];
                int *xp = &sayilar[min_idx], *yp = &sayilar[i];
                *xp = *yp;
                *yp = temp;
            }
        }
    }
    else
    {
        for (int i = 0; i < 10; i++)
        {
            int i, j, min_idx;

            // One by one move boundary of unsorted subarray
            for (i = 0; i < 10 - 1; i++)
            {

                // Find the minimum element in unsorted array
                min_idx = i;
                for (j = i + 1; j < 10; j++)
                    if (sayilar[j] > sayilar[min_idx])
                        min_idx = j;

                // Swap the found minimum element
                // with the first element
                int temp = sayilar[min_idx];
                int *xp = &sayilar[min_idx], *yp = &sayilar[i];
                *xp = *yp;
                *yp = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", sayilar[i]);
    }

    return 0;
}