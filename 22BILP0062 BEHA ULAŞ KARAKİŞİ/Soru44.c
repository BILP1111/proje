#include <stdio.h>
#include <string.h>

/*
 * Girilen 2 kelimeden string.h kütüphanesinde bulunan
 * strlen fonksiyonu kullanarak hangisinin daha büyük
 * olduğunu bulup conditional operator kullanarak ekrana yazdıran program
 */

int main() {







    int matrix[3][3];

    for (int x = 0; x < 3; ++x) {
        for (int y = 0; y < 3; ++y) {
            printf("[%i, %i] değerini giriniz: ", x, y);
            scanf("%i", &matrix[x][y]);
        }
    }

    printf("2D Matrix\n");

    for(int x=0 ; x<3; x++)
    {
        for(int y=0; y<3; y++)
        {
            printf("%i%s",matrix[x][y], y==2?"":", ");
        }
        printf("\n");
    }

    return 0;
}


