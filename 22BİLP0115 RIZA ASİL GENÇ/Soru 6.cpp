#include <stdio.h>
#include <math.h>

int main() 
{
    float r;
    printf("Yaricapi cm cinsinden giriniz: ");
    scanf("%f",&r);
    
	printf("Girdiginiz cemberin cevresi: %.2fcm alani: %.2fcm", 2*M_PI*r, M_PI*(r*r));
    return 0;
}
