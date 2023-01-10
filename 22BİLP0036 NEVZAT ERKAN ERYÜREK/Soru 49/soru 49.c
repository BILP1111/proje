#include <stdio.h>
#include <conio.h>
 
void main(void)
{
      char kelime[10];
 
      printf("\n Kelimeyi girin : ");
      gets(kelime);
      fflush(stdin);
 
      printf("\n Girilen Kelime : %s",kelime);
      getch();
}
