#include <stdio.h>

/*�lk olarak de�i�ken olarak ya�� tan�mlad�m ve kullan�c�dan ya��n� girmesini isteyip scanf komutu ile girilen ya�� okuttum
Sonras�nda if-else komutu ile girilen ya�lar�n belirledi�im kar��l��� olan hayat dilimlerini if-else ile tan�mlad�m ve en sonda
65 �st� bir ya� girildi�inde ya�l�s�n�z diye yazd�rmak istedim.*/

int main(void) {
    int yas;
    printf("Lutfen yasinizi giriniz: ");
    scanf("%d", &yas);

    if (yas < 0) {
        printf("Ge�ersiz ya� lutfen tekrar giriniz.\n");
    } else if (yas < 13) {
        printf("Cocuksunuz\n");
    } else if (yas < 20) {
        printf("Gencsiniz.\n");
    } else if (yas < 65) {
        printf("Yetiskinsiniz.\n");
    } else {
        printf("Yaslisiniz.\n");
    }
}
