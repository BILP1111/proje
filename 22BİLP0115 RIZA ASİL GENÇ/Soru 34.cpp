#include <stdio.h>
#include <string.h>

int main() 
{
    int sayi, bolenlertoplam = 0;

    printf("Bir sayi giriniz: ");
    scanf("%i",&sayi);

    for (int i = 0; i < sayi; ++i) 
	{
        if(sayi % i == 0) bolenlertoplam += i;
    }

    if(bolenlertoplam == sayi) printf("%i sayisi mukemmel bir sayidir", sayi);
    else printf("%i sayisi mukemmel bir sayi degildir", sayi);
    return 0;
}
