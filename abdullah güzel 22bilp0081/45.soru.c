//girilen kelimeyi tersten yazdýran program
#include <stdio.h>
#include <string.h>
int main()
{
   char s[100];

   printf("Ters cevirilecek kelimeyi girin\n");
   gets(s);

   strrev(s);

   printf("kelimenin tersi: %s\n", s);

   return 0;
}
