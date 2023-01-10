#include <stdio.h>


char* gunler[] = {"Pazartesi", "Sali","Carsamba","Persembe", "Cuma", "Cumartesi", "Pazar"};
int main() 
{
    int num;
    printf("Gun numarasini girin: ");
    scanf("%i",&num);

    printf("Gun: %s",gunler[num-1]);
    return 0;
}
