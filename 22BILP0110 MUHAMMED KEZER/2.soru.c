//bir sayi girilmesini isteyen ve girilen sayiyi ekrana yazan program

#include <stdio.h>

int main ()
{
	int sayi;
	
	printf("Bir Sayi Giriniz:\n");
	scanf("%d",&sayi);
	
    printf("\nGirdiginiz sayi %d",sayi);
    
    getch();
}
