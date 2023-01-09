#include <stdio.h>

int main() { // Yaşı girilen bir kişinin seçimlerde oy verme yeterliliği olup olmadığını test eden program
    int yas = 0;
	
	printf("Yas giriniz : ");
	scanf("%d",&yas);
	
	if(yas >= 18)	{ // yaş 18'den büyüktür veya eşit ise 
		printf("Oy Kullanabilirsin!");
	}
	else { // değil ise oy kullanamaz
		printf("Oy kullanamazsin yasin %d",yas);
	}
    return 0;
}