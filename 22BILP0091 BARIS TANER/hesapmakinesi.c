#include <stdio.h>

int main() { // Hesap Makinesi
    int sayi1,sayi2;
    int secim;
    
    printf("1.Sayiyi seciniz: ");
    scanf("%d",&sayi1);
    printf("2.Sayiyi giriniz: ");
    scanf("%d",&sayi2);
    
    printf("\n******Islem Secimini Giriniz******\n");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    
    printf("Seciminizi giriniz ");
    scanf("%d",&secim); // condition icin secim
    
    if(secim == 1){
        printf("Toplama isleminn sonucu %d dir.", sayi1 + sayi2);
    }
    else if(secim == 2){
        printf("Cıkarma isleminin sonucu %d dir.", sayi1 - sayi2);
    }
    else if(secim == 3){
        printf("Carpma isleminin sonucu %d dir.", sayi1 * sayi2);
    }
    else if(secim == 4){
        printf("Cikarma isleminin sonucu %d dir.", sayi1 / sayi2);
    }
    else{
        printf("Dogru secim yapiniz !!!"); // 1-4 arası değer girilmesse çıkıcak mesaj
    }
    return 0;
}