#include <stdio.h>
#include <string.h>
 
int main()
{
      char kelime[100];
      int harfsay;
 
      printf("\n Lütfen bir kelime giriniz :");
      gets(kelime);
 
      harfsay = strlen(kelime);
      
 
      printf(" "%s" kelimesi %i karakterden ibaret.",kelime,harfsay);
      
      return 0;
}