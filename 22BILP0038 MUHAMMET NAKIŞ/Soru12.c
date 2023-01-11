// Yaþý girilen bir kiþinin seçimlerde oy verme yeterliliði olup olmadýðýný test eden program.

#include <stdio.h> // KÜTÜPHANE TANIMLAMA

int main () {
	int yas; // DEÐER TANIMLAMA
	printf("Yasinizi giriniz : "); // KULLANICIDAN DEÐER ALMA
	scanf("%d",&yas); // DEÐERÝ HAFIZADA TUTMA
	
	if(yas > 18) // EÐER yas 18'DEN BÜYÜK ÝSE
		printf("SECIMLERDE OY KULLANABILIRSINIZ!"); // EKRANA YAZDIRMA
	else // DEÐÝL ÝSE
		printf("SECIMLERDE OY KULLANAMAZSINIZ!"); // EKRANA YAZDIRMA
	
	return 0;
}
