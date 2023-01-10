#include <stdio.h>
#include <conio.h>

int main(){
 
    int sayi1, sayi2;
 
    printf("Birinci Sayiyi Giriniz: ");
    scanf("%d", &sayi1);
 
    printf("Ikinci Sayiyi Giriniz: ");
    scanf("%d", &sayi2);
 
    if ( sayi1 > sayi2)
        printf("%d > %d", sayi1, sayi2);
 
    else if ( sayi1 == sayi2)
        printf("%d = %d", sayi1, sayi2);
    
    else 
        printf("%d > %d", sayi2, sayi1);
    
    getch();
	   
    return 0; 
}

// kütüphanede conio.h ekledik bu windows platformu için yazýlmýþ bir koddur.\\
