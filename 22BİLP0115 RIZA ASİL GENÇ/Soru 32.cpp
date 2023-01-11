#include <stdio.h>


int main() 
{


    while (1) 
	{
        int islemNo;
        int sayi1, sayi2;
        printf("Hangi islemi yapmak istersiniz?\n");
        printf("1-TOPLAMA\n");
        printf("2-CIKARMA\n");
        printf("3-CARPMA\n");
        printf("4-BOLME\n");
        printf("5-MOD\n");
        printf("6-BITIR\n");


        scanf("%i", &islemNo);
        if (islemNo == 6) break;

        printf("Ilk sayiyi giriniz: ");
        scanf("%d", &sayi1);

        printf("Ikinci sayiyi giriniz: ");
        scanf("%d", &sayi2);


        if (islemNo == 1) printf("Sayilarin toplamý: %d\n", sayi1 + sayi2);
        else if (islemNo == 2) printf("Sayilarin farki: %d\n", sayi1 - sayi2);
        else if (islemNo == 3) printf("Sayilarin carpimi: %d\n", sayi1 * sayi2);
        else if (islemNo == 4) printf("Sayilarin bolumu: %.2f\n", (float) sayi1 / sayi2);
        else if (islemNo == 5) printf("Sayilarin modu: %d\n", sayi1 % sayi2);

    }
    return 0;
}
