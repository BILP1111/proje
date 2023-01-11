#include <stdio.h>

int main()
{
    int matrix[2][2]; //degiskenleri belirledik.
    int satir = 0, sutun = 0; //degiskenleri belirledik.

    for (satir = 0; satir < 3; satir++)  //satır icin for dongusu
    {
        for (sutun = 0; sutun < 3; sutun++) //sütun icin for dongusu
        {
            printf("[%d][%d] numarali matrisi girin= ", satir + 1, sutun + 1); //kullanicidan deger istedigimizi belirten yaziyi ekrana yazdiriyoruz.
            scanf("%d", &matrix[satir][sutun]); //kullanici klavyeden deger girer.
        }
    }
    for (satir = 0; satir < 3; satir++) //satir icin for dongusu
    {
        for (sutun = 0; sutun < 3; sutun++) //sutun icin for dongusu
        {
            printf("[ %d ] ", matrix[satir][sutun]); // ekrana yazi yazdiriliyor
        }
    }

    return 0;
}