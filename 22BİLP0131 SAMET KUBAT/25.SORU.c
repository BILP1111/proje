#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char reversed[100];

    printf("Bir metin girin: ");
    gets(str);

    int n = strlen(str);

    for (int i = 0; i < n; i++)
    {
        reversed[i] = str[n - i - 1];
    }

    printf("Tersine çevrilmis metin: %s\n", reversed);

    return 0;
}

//kullanıcıdan bir metin girmesini isteriz sonra  girilen metnin tersini verir//

