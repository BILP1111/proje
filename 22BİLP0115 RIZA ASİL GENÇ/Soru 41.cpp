#include <stdio.h>
#include <string.h>

int main() 
{
    float toplamKilo = 0;
    float toplamBoy = 0;
    for (int i = 0; i < 5; ++i) 
	{
        printf("%i. ogrencinin boyunu m cinsinden girin: ", i+1);
        float t;
        scanf("%f",&t);

        toplamBoy += t;

        printf("%i. ogrencinin kilosunu kg cinsinden girin: ", i+1);
        scanf("%f",&t);

        toplamKilo += t;
    }

    printf("5 ogrencinin boylarinin ortalamasi: %.2fm kilolarinin ortalamasi: %.2fkg dir", toplamBoy/5, toplamKilo/5);
    return 0;
}
