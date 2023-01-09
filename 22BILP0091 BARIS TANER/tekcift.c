#include <stdio.h>

int main() { // Girilen bir sayının tek mi çift mi olduğunu hesaplayan program
    int a,b;
	printf("Sayiyi gir: "); scanf("%d",&a);
	if (a%2==0) printf("Cift");
	else printf ("Tek");
	getch();
    return 0;
}