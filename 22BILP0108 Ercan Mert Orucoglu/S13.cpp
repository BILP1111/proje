#include <stdio.h>

int main(void)
{
    int yil;

    printf("Lutfen bir yil giriniz: "); /*Printf ile bir deðer girilmesini istedim*/
    scanf("%i", &yil); /*Girilen deðeri okuttum yýl olarak tanýmladým*/

    if (yil % 4 == 0 || yil%400 == 0) { /*if else komutu ile matematiksel iþlemler yapýp girilen yýl þuan bulunduðumuz yýl ise
	girdiðiniz yýldayýz yazmasýný istedim*/
        printf("Girdiginiz yildayiz.\n");
    }
    else { /*Eðer ki girilen yýl matematiksel hesaplamanýn dýþýnda kalýyorsa else komutu ile aþþaðýdakinin yazýlmasýný istedim.*/
        printf("Girdiginiz yil artik yil degil.\n");
    }
}


