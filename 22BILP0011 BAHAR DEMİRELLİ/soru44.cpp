#include <stdio.h>
#include <conio.h>

int main(void)
{
int matris[3][3];
int i, j;

copy code
printf("3x3 luk bir matrisin degerlerini giriniz: \n");

for (i = 0; i < 3; i++)
{
    for (j = 0; j < 3; j++)
    {
        printf("matris[%d][%d] = ", i, j);
        scanf("%d", &matris[i][j]);
    }
}

printf("\nGirdiginiz matris:\n");
for (i = 0; i < 3; i++)
{
    for (j = 0; j < 3; j++)
    {
        printf("%d ", matris[i][j]);
    }
    printf("\n");
}

return 0;
}

//"matris", "i" ve "j" de�i�kenleri tan�mlan�r. "matris" de�i�keni 3x3 l�k bir matrisi saklar, "i" ve "j" de�i�kenleri ise d�ng�ler i�in kullan�l�r.
//Kullan�c�dan 3x3 l�k bir matrisin de�erlerini al�n�r. Bu i�lem "for" d�ng�s� kullan�larak ger�ekle�tirilir. �rne�in, "matris[0][0]" de�erine kullan�c�dan bir de�er girilir.
//Girilen matris de�erleri ekrana yazd�r�l�r. Bu da "for" d�ng�s� kullan�larak ger�ekle�tirilir.
//Program sonland�r�l�r.
