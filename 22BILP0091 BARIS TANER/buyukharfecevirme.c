#include <stdio.h>
#include <conio.h>
#include <string.h>

#include <ctype.h>

int main()
{
    int j = 0;
    char str[] = "Merhaba Dunya\n";
    char ch;
 
    while (str[j]) {
        ch = str[j];
        putchar(toupper(ch));
        j++;
    }
 
    return 0;
}