/* alınan 10 sayıdan en büyük ve küçüğünü veren program */

#include <stdio.h>

int main()
{
    int sayilar[10]; 
    int i;

    printf(" 10 adet sayi giriniz: ");

    
    for (i = 0; i < 10; i++)
        scanf("%d", &sayilar[i]);

    int min = sayilar[0]; 
    int max = sayilar[0]; 

    
    for (i = 1; i < 10; i++) {
        if (sayilar[i] > max)
            max = sayilar[i];
        if (sayilar[i] < min)
            min = sayilar[i];
    }

    printf("En buyuk sayi: %d\n", max);
    printf("En kucuk sayı: %d\n", min);

    return 0;
}