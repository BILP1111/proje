#include <stdio.h>

int main(void)
{
    int yil;

    printf("Lutfen bir yil giriniz: "); /*Printf ile bir de�er girilmesini istedim*/
    scanf("%i", &yil); /*Girilen de�eri okuttum y�l olarak tan�mlad�m*/

    if (yil % 4 == 0 || yil%400 == 0) { /*if else komutu ile matematiksel i�lemler yap�p girilen y�l �uan bulundu�umuz y�l ise
	girdi�iniz y�lday�z yazmas�n� istedim*/
        printf("Girdiginiz yildayiz.\n");
    }
    else { /*E�er ki girilen y�l matematiksel hesaplaman�n d���nda kal�yorsa else komutu ile a��a��dakinin yaz�lmas�n� istedim.*/
        printf("Girdiginiz yil artik yil degil.\n");
    }
}


