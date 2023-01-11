//bir üçgenin girilen üç kenarýna göre üçgen türünü bulan program

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Uc kenar uzunluklari (a, b, c):");
    scanf("%d %d %d",&a, &b, &c);

    if (a == b && b == c) {
        printf("Bu bir esit kenarli ucgendir\n");
    }
    else if (a == b || b == c || a == c) {
        printf("Bu bir ikizkenarli ucgendir\n");
    }
    else {
        printf("Bu bir cesitkenarli ucgendir\n");
    }
    return 0;
}
