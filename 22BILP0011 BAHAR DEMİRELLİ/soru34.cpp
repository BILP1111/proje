#include<stdio.h>
#include<conio.h>
#include<math.h>

//Mükemmel sayý, sayýlar teorisinde, kendisi hariç pozitif tam bölenlerinin toplamý kendisine eþit olan sayý.

int main(void) {
    int sayi, i, toplam = 0;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &sayi);

    for (i = 1; i < sayi; i++) {
        if (sayi % i == 0) {
            toplam += i;
        }
    }

    if (toplam == sayi) {
        printf("Girilen sayi mukemmel bir sayidir.\n");
    } else {
        printf("Girilen sayi mukemmel bir sayi degildir.\n");
    }

    return 0;
}
//Bu programda, girilen sayýnýn mükemmel sayý olup olmadýðýný bulmak için bir "for" döngüsü kullanýlmýþtýr. Bu döngü, girilen sayýdan küçük olan bütün sayýlar için tek tek kontrol edilir. Eðer girilen sayýnýn bir böleni ise, toplama eklenir. 
