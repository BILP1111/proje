#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
printf("Counting from 1 to 25...\n");
for (i = 1; i <= 25; i++)
{
printf("%d ", i);
}
printf("\nCounting from 25 to 1...\n");
for (i = 25; i >= 1; i--)
{
printf("%d ", i);
}
return 0;
}
