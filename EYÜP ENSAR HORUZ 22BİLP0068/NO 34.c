#include <stdio.h>
 
int main() {
 
    int sayi, toplam = 0;  // sayi ve toplam deðerlerini tanýttýk
 
    printf("Sayi Giriniz: ");  	// kullanýcýdan sayi girmesini isteyen deðerleri yazdýk
    scanf("%d", &sayi);			// girilen sayinin sayi1 olduðunu programa tanýttýk
 
    for (int i = 1; i < sayi; i++) { // for döngüsü yardýmý ile baþlangýç ve bitiþ deðerlerini girerek deðere ulaþana kadar dönmesini saðladýk 
        if (sayi % i == 0)
            toplam += i;
 
    }
 
    if (toplam == sayi)   // eðer sayi mükemmel sayi ise ekrana mükemmel sayidir yazýlýr
        printf("%d mukemmel sayidir", sayi);
    else
        printf("%d mukemmel sayi degildir", sayi);  // deðil ise ekrana mükemmel sayi deðldir yazýlýr.
 
    return 0;
}
