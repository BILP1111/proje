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

//"matris", "i" ve "j" deðiþkenleri tanýmlanýr. "matris" deðiþkeni 3x3 lük bir matrisi saklar, "i" ve "j" deðiþkenleri ise döngüler için kullanýlýr.
//Kullanýcýdan 3x3 lük bir matrisin deðerlerini alýnýr. Bu iþlem "for" döngüsü kullanýlarak gerçekleþtirilir. Örneðin, "matris[0][0]" deðerine kullanýcýdan bir deðer girilir.
//Girilen matris deðerleri ekrana yazdýrýlýr. Bu da "for" döngüsü kullanýlarak gerçekleþtirilir.
//Program sonlandýrýlýr.
