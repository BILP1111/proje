#include <stdio.h>
#include <string.h>

int main() 
{



    int ogrenciSayisi;

    printf("Kac ogrenciniz bulunuyor: ");
    scanf("%i",&ogrenciSayisi);



    int toplam = 0;
    for (int i = 0; i < ogrenciSayisi; ++i) 
	{
        printf("%i. ogrencinin notunu girin: ", i+1);
        int t;
        scanf("%i",&t);

        toplam += t;
    }

    printf("%i ogrencinin notlarinin toplami: %i ortalamasi: %.2f dir", ogrenciSayisi, toplam, (float)toplam/ogrenciSayisi);
    
	return 0;
}
