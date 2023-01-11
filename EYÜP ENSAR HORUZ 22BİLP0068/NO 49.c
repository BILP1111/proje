#include <stdio.h>
#include <conio.h>
 
void main(void)
{
      char kelime[10];  // 10 karaktere kadar kelime girilebilir
 
      clrscr();
 
      printf("\n Kelimeyi girin : ");
      gets(kelime);
      fflush(stdin); 
 
      printf("\n Girilen Kelime : %s",kelime);
      getch();
}
