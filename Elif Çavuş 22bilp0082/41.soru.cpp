#include<stdio.h>
int main()
{
    float boy[5],kilo[5];
    float topkilo,topboy;
    float ortboy,ortkilo;
    int i;

    printf("\n Kilolar ve Boylar: ");
    printf(":::::::::::::::::::::::");

    for(i=0 ; i<5 ; i++)
    {
        printf("\n %i . Öğrencinin",i+1);

        printf("\n Boyu :");
        scanf("%f",&boy[i]);

        printf("\n Kilosu : ");
        scanf("%f",&kilo[i]);

        topboy=topboy+boy[i];
        topkilo=topkilo+kilo[i];
    }

         ortboy=topboy/5;
         ortkilo=topkilo/5;

    printf("\n Kilo Ortalaması : %f",ortkilo);
    printf("\n Boy ortalaması : %f",ortboy);


    return 0;

}