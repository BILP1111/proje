#include <stdio.h>

int main() { // KDV Hesaplayan Program
    int fiyat;
    
    printf("Urunun kdv'siz fiyatini giriniz: ");
    scanf("%d",&fiyat);
    
    fiyat = fiyat + (fiyat * 18 / 100); // fiyatı KDVsi ile almak 
    
    printf("Yeni fiyat = %d",fiyat); // yeni fiyatı ekrana yaz
    return 0;
}