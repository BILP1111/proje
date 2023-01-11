#include <stdio.h>

int main() 
{
    float mesafe, dakika;
    printf("Mesafeyi cm cinsinden giriniz: ");
    scanf("%f",&mesafe);
	printf("Varis suresini dakika cinsinden giriniz: ");
    scanf("%f",&dakika);
    printf("Gidilmesi gerekilen hiz: %.2fcm/dk", mesafe/dakika);
    return 0;
}
