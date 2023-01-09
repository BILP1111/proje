#include<stdio.h>
#include <string.h>

//Girilen kelime içerisindeki sesli harf sayýsýný bulan program.

main(){
	char kelime[10];
	int sayac;
	
	printf("Kelime giriniz: ");
	gets(kelime);
	
	for(int i=0; i < strlen(kelime); i++){
		if(kelime[i] == 'a' || kelime[i] == 'A' || kelime[i] == 'e' || kelime[i] == 'E' || kelime[i] == 'i' || kelime[i] == 'I' || kelime[i] == 'o' || kelime[i] == 'O' || kelime[i] == 'u' || kelime[i] == 'U'){
			sayac++;
		}
	}
	
	printf("%s kelimesi %d sesli harf iceriyor.", kelime, sayac);
}
