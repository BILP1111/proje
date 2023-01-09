#include <stdio.h>

int main() { // Kullanıcının iki sayı girmesini ve sayıların büyüklüğünü karşılaştıran program
    int sayi1 = 0;
	int sayi2 = 0;
	
	printf("I. sayiyi giriniz : ");
	scanf("%d",&sayi1);
	printf("II. sayiyi giriniz : ");
	scanf("%d",&sayi2);
	
	if (sayi1 > sayi2)
	{
		printf("%d %d'den daha buyuktur",sayi1,sayi2);	
	}
	else if(sayi2 > sayi1) {
		printf("%d %d'den daha buyuktur",sayi2,sayi1);
	}
	else {
		printf("Sayilar esittir %d - %d",sayi1,sayi2);
	}
    return 0;
}