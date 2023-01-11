#include <stdio.h>


int main(){

int gun;
printf("...HAFTANIN GUNLERI...\n\n");
printf("1-7 araliginda bir deger giriniz: ");
scanf("%d",&gun);

switch(gun)
{
	case 1:
	printf("Pazartesi");
	   break;
	case 2:
	printf("Sali");
	   break;
	case 3:
	printf("Çarşamba");
	   break;
	case 4:
	printf("Perşembe");
	  break;
	case 5:
	printf("Cuma");
	   break;
	case 6:
	printf("Cumartesi");
	   break;
	case 7:
	printf("Pazar");
	   break;
	default:
		printf("Lütfen 1-7 aralıgında bir deger giriniz.");
		
	
	return 0;
	
}
}