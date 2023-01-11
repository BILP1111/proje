#include <stdio.h>

int main(){ 
	int sayi;
     
	printf("Bir sayi giriniz : ");
	scanf("%d",&sayi);
 
	if(sayi%2 == 0)  /* BURADA MOD DÖNGÜSÜNÜ KULLANDIK 2 ÝLE MODU 0 ÝSE ÇÝFTTÝR. YANÝ 2 YE BÖLÜMDEN KALAN 0 ÝSE ÇÝFTTÝR*/
		printf("%d sayisi cifttir.", sayi); 	/*EÐER MOD 0 ÝSE ÇÝFT YAZISINI GÖSTERÝR ANCAK DEÐÝL ÝSE TEK GÖSTERÝR*/
	else
		printf("%d sayisi tektir.", sayi);
}
