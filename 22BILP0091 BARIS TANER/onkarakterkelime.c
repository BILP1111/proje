#include <stdio.h>
#include <conio.h>
 
void main(void) // 10 karaktere kadar bir kelime girilmesini istiyen ve ekrana yazdıran program
{
    char kelime[10];
    printf("\n Kelimeyi girin : ");
    gets(kelime);
    fflush(stdin);
 
    printf("\n Girilen Kelime : %s",kelime);
    getch();
}