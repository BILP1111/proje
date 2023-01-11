#include<stdio.h>
#include<conio.h>
#include<math.h>

//M�kemmel say�, say�lar teorisinde, kendisi hari� pozitif tam b�lenlerinin toplam� kendisine e�it olan say�.

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
//Bu programda, girilen say�n�n m�kemmel say� olup olmad���n� bulmak i�in bir "for" d�ng�s� kullan�lm��t�r. Bu d�ng�, girilen say�dan k���k olan b�t�n say�lar i�in tek tek kontrol edilir. E�er girilen say�n�n bir b�leni ise, toplama eklenir. 
