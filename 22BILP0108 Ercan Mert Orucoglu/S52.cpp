#include <stdio.h>
#include <conio.h>
#include <string.h> // birle�tirmek i�in bu k�t�phaneleri kulland�k

int main()
{
	char k[100]; // char ile dizi de�erini, int ile uzunluj de�eriniatad�k.
	int uzunluk = 0;
	
	printf("Lutfen bir kelime giriniz: "); // printf ile kullan�c�dan bir de�er girilmesini isteyip gets ile okuttuk
	gets(k);
	
	uzunluk = strlen(k); // hesaplama yap�p yazd�rd�k
	
    printf(" \"%s\" kelimesi %i karakterdir.",k,uzunluk);
}
