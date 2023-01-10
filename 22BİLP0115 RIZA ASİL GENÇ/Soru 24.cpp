#include <stdio.h>
#include <math.h>



int main() 
{

    printf("1 den 50 ye tum sayilar: \n");
    for (int i = 1; i <= 50; ++i) 
	{
        if(i % 2 == 1)
        printf("%i bir tek sayidir\n", i);
        else if(i == 0)
        printf("%i bir dogal sayidir\n", i);
        else
        printf("%i bir cift sayidir\n", i);
    }
    return 0;
}
