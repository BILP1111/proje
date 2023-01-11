#include <stdio.h>

void carpim(int sayi)
{
    for (int i = 0; i < 9; i++)
    {
        printf("%d x %d = %d", i, sayi, (i * sayi));
    }
}

int main()
{
    int sayi = 0;
    printf("Sayi giriniz:");
    scanf("%d", &sayi);
    carpim(sayi);
    return 0;
}