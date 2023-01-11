#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
printf("1'den 25'e say...\n");
for (i = 1; i <= 25; i++)
{
printf("%d ", i);
}
printf("\n 25'ten 1'e say...\n");
for (i = 25; i >= 1; i--)
{
printf("%d ", i);
}
return 0;
}
