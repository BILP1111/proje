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

    for (int i = 0; i < length-1; ++i) 
	{
        if(cumle[i] == ' ') cumle[i+1] = toupper(cumle[i+1]);
    }

    printf("Verilen cumlede kelimelerin ilk harfi duzenlenmis hali: %s", cumle);
    return 0;
}
