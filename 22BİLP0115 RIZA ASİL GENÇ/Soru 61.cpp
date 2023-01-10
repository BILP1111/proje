#include <stdio.h>
#include <string.h>

int bolenBul(int sayi) 
{
    for (int i = 2; i < sayi; ++i) 
	{
        if(sayi % i == 0) return i;
    }
    return 0;
}
int main() 
{
    while(1) 
	{
        int sayi;
        printf("Bir sayi giriniz: ");
        scanf("%i",&sayi);

        if(bolenBul(sayi) == 0) printf("Girmis oldugunuz sayi bir asal sayidir\n");
        else printf("Girmis oldugunuz sayi asal bir sayi degildir\n");
    }
    return 0;
}
