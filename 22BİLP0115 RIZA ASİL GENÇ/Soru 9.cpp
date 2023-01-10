#include <stdio.h>


int main() 
{
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%i",&sayi);
    
	printf("%i sayisi %s",sayi,((sayi > 0)?"pozitiftir":sayi==0?"sifirdir":"negatiftir"));
    return 0;
}
