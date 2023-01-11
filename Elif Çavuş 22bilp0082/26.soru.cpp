#include <stdio.h>

int main() {
	
	int sayi,n, sonuc=1;
	
	printf("Bir sayi giriniz: \n");
	scanf("%d",&sayi);
	
	for(n = 1; n <= sayi; n++) {
		sonuc = sonuc * n;
	}
	
	printf("\n %d = %d ",sayi,sonuc);
	
	return 0;
}
