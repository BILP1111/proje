#include <stdio.h>
#include <conio.h>
#include <math.h>
 
void main(void)
{
 int x1 = 0, y1 = 0;
 int x2 = 0, y2 = 0;
 float mesafe = 0 ;
 printf("\n 1. Nokta (X Y): ");
 scanf("%d %d",&x1,&y1);
 fflush(stdin);
 
 printf("\n 2. Nokta (X Y): ");
 scanf("%d %d",&x2,&y2);
 fflush(stdin);
 
 mesafe = sqrt( pow( (y2-y1),2) + pow((x2-x1),2) ) ;
 printf("\n Mesafe : %.2f",mesafe);
 
 getch();
}
