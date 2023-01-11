// puaný verilen öðrencilerin ortalmasýný hesaplayan program

#include <stdio.h>

int main() {
    int ogrenciSayisi;
    printf("Kac tane notunuz var? ");
    scanf("%d", &ogrenciSayisi);

    int grades[ogrenciSayisi];
    int sum = 0;
    for (int i = 0; i < ogrenciSayisi; i++) {
        printf("%d. notu girin: ", i+1);
        scanf("%d", &notlar[i]);
        sum += notlar[i];
    }

    float ortalama = (float) sum / ogrenciSayisi;
    printf("Ortalama: %.2f", ortalama);

    return 0;
}
