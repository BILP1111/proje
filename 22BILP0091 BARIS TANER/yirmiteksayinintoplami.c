#include <stdio.h>

int main() { // Klavyeden girilen 20 adet sayı arasından sadece tek sayılarının toplamını bulan programı yazınız
    int sayi;
	int toplam = 0;
	
	for(int a = 1; a <= 20; a++){ // 20 kez dönen döngü sonrasısnda tek sayıları alan bir koşul ve toplam
		printf("Sayi Giriniz :");
		scanf("%d",&sayi);
		if(sayi %2 == 1){
			toplam = toplam + sayi;
		}
	}
	
	printf("Toplam = %d",toplam);
    return 0;
}