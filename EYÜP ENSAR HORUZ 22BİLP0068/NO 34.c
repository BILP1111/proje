#include <stdio.h>
 
int main() {
 
    int sayi, toplam = 0;  // sayi ve toplam de�erlerini tan�tt�k
 
    printf("Sayi Giriniz: ");  	// kullan�c�dan sayi girmesini isteyen de�erleri yazd�k
    scanf("%d", &sayi);			// girilen sayinin sayi1 oldu�unu programa tan�tt�k
 
    for (int i = 1; i < sayi; i++) { // for d�ng�s� yard�m� ile ba�lang�� ve biti� de�erlerini girerek de�ere ula�ana kadar d�nmesini sa�lad�k 
        if (sayi % i == 0)
            toplam += i;
 
    }
 
    if (toplam == sayi)   // e�er sayi m�kemmel sayi ise ekrana m�kemmel sayidir yaz�l�r
        printf("%d mukemmel sayidir", sayi);
    else
        printf("%d mukemmel sayi degildir", sayi);  // de�il ise ekrana m�kemmel sayi de�ldir yaz�l�r.
 
    return 0;
}
