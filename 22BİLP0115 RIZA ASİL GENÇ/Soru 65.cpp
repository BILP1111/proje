#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char cumle[255];
    printf("Bir cumle girin: ");
    scanf("%[^\n]", cumle);

    int length = strlen(cumle);
    cumle[0] = toupper(cumle[0]);
    for (int i = 1; i < length; ++i) 
	{
        if(cumle[i-1] == ' ') cumle[i] = toupper(cumle[i]);
    }
    printf("Cumlenin duzenlenmis hali: %s", cumle);
    return 0;
}

