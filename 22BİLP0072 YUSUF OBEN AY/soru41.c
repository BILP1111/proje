#include <stdio.h>

int main()
{
    int boy = 0;
    int kilo = 0;
    int totalKilo = 0;
    int totalBoy = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Boy giriniz:");
        scanf("%d", &boy);
        totalBoy += boy;

        printf("Kilo giriniz:");
        scanf("%d", &kilo);
        totalKilo += kilo;
    }

    printf("Toplam boy: %d, Toplam Kilo: %d, Ortalama Boy: %d, Ortalama Kilo: %d", totalBoy, totalKilo, (totalBoy / 5), (totalKilo / 5));
    return 0;
}