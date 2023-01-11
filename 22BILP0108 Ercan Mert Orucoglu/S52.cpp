#include <stdio.h>
#include <conio.h>
#include <string.h> // birleþtirmek için bu kütüphaneleri kullandýk

int main()
{
	char k[100]; // char ile dizi deðerini, int ile uzunluj deðeriniatadýk.
	int uzunluk = 0;
	
	printf("Lutfen bir kelime giriniz: "); // printf ile kullanýcýdan bir deðer girilmesini isteyip gets ile okuttuk
	gets(k);
	
	uzunluk = strlen(k); // hesaplama yapýp yazdýrdýk
	
    printf(" \"%s\" kelimesi %i karakterdir.",k,uzunluk);
}
