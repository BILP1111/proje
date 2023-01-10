#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    char sorted[100];
    int count = 0;

    printf("Bir metin girin: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {
            sorted[count] = str[i];
            count++;
        }
    }

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (sorted[i] > sorted[j])
            {
                char temp = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = temp;
            }
        }
    }

    printf("Alfabetik siraya gore siralanmis metin: %s\n", sorted);

    return 0;
}
