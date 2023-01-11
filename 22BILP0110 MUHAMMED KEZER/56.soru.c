//girilen harfin sesli veya sessiz olduðunu bulan program
#include <stdio.h>
int main()
{
  char ch;
 
  printf("Bir karakter girin\n");
  scanf("%c", &ch);


  if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
    printf("%c sesli harftir.\n", ch);
  else
    printf("%c sessiz harftir.\n", ch);
     
  return 0;
}

