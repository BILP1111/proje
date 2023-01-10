#include <stdio.h>

/*
 * Kullanının girdiği 5 sayıyı bir int arrayde depolayan ardından kullanıcının belirlediği
 * sırada bubble sort algoritmasını kullanarak sıraladıktan sonra
 * ekrana yazdıran uygulama
 */

int main() {


    int values[5];
    for (int i = 0; i < 5; ++i) {
        printf("Bir sayı giriniz: ");
        int t;
        scanf("%i",&t);

        values[i] = t;


    }

    printf("Sıralama tipini seçin:\n1- Küçükten büyüğe\n2- Büyükten küçüğe\n");

    int type;
    scanf("%d", &type);

    for (int i = 0; i < 5; i++) {
        for (int x = i+1; x < 5; x++) {
            if((type == 1 && values[i] > values[x]) || (type == 2 && values[i] < values[x])) {
                int valTemp = values[i];
                values[i] = values[x];
                values[x] = valTemp;
            }
        }
    }

    printf(type==1?"Sayılar küçükten büyüğe şu şekildedir: ":"Sayılar  büyükten küçüğe şu şekildedir: ");
    for (int i = 0; i < 5; ++i) {
        printf("%i, ", values[i]);
    }



    return 0;
}


