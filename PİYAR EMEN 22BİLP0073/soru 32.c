#include<stdio.h>

//Kullanýcý istediði sürece tekrar çalýþtýrýlan basit hesap makinasý iþlevi gören bir program yazýnýz?

void hesapla(){
	int sayi1, sayi2, islem;
	
	printf("ilk sayiyi giriniz: ");
	scanf("%d", &sayi1);
	
	printf("ikinci sayiyi giriniz: ");
	scanf("%d", &sayi2);
	
	printf("1. Toplama\n2. Cikarma\n3. Carpma\n4. Bolme\nYapmak istediginiz islemi seciniz: ");
	scanf("%d", &islem);
	
	switch(islem){
        case 1:
            printf("Toplam = %d\n\n", sayi1 + sayi2);
            break;
        case 2:
            printf("Fark = %d\n\n", sayi1 - sayi2);
            break;
        case 3:
            printf("Carpim = %d\n\n", sayi1 * sayi2);
            break;
        case 4:
            printf("Bolum = %.2f\n\n", (float)sayi1 / (float)sayi2);
            break;
    }
    
    hesapla();
}

main(){
	hesapla();
}
