/* kullanıcıdan alınan 5 sayıyı küçükten büyüğe sıralayan program */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilar[5];
    int i, j, gecici;

    printf(" 5 tane sayi giriniz: \n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &sayilar[i]);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (sayilar[i] > sayilar[j])
            {
                gecici = sayilar[i];
                sayilar[i] = sayilar[j];
                sayilar[j] = gecici;
            }
        }
    }

    printf("\nSiralanmis hali: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", sayilar[i]);
    }

    return 0;
}
