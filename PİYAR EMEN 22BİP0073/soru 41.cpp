#include<stdio.h>
#include <string.h>

//10 karaktere kadar bir kelime girilmesini isteyen ve ekrana yazdýran program.


main(){
	char kelime[10];
	
	printf("10 karaktere kadar bir kelime giriniz: ");
	gets(kelime);
	
	while(strlen(kelime) > 10){
		printf("Girdiginiz kelime 10 karakterden kisa olmali!\n");
		printf("10 karaktere kadar bir kelime giriniz: ");
		gets(kelime);
	}
	
	printf("Girdiginiz kelime: %s", kelime);
}
