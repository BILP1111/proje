#include <stdio.h>
 
int sum;
void header(void);
int get_square(int number);
void end(void);
 
 
void main(void) // Birdeen yediye kadar olan sayilarin karesini ve karelerinin toplamini bulan program
{
   int index;
   header();
   for (index = 1 ; index <= 7 ; index++)
   {
          get_square(index);
   }
   end();
}
 
 
void header(void)
{
   sum = 0;
   printf("1 ile 7 arasindaki sayilarin karesi\n");
   printf("-----------------------------------\n\n");
}
 
 
int get_square(int number)
{
   int numsq;
   numsq = number * number;
   sum += numsq;
   printf("%d sayisinin Karesi %d dir.\n", number, numsq);
}
 
 
void end(void)
{
   printf("\nKarelerin toplami %d dir.\n", sum);
}