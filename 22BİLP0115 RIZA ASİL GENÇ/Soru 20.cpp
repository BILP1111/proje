#include <stdio.h>
#include <math.h>


float uzaklik(float x1, float y1, float x2, float y2) {
    return sqrt(powf(x1-x2,2)+ powf(y1-y2,2));
}

int main() {
    int islemNo;

    float xLoc[3];
    float yLoc[3];

    for (int i = 1; i < 4; ++i) {
        printf("%i. ucgenin kenarinin x koordinatini girin: ",i);
        float var;

        scanf("%f", &var);
        xLoc[i] = var;

        printf("%i. ucgenin kenarinin y koordinatini girin: ",i);

        scanf("%f", &var);
        yLoc[i] = var;
    }

    float AB = uzaklik(xLoc[0],yLoc[0],xLoc[1],yLoc[1]);
    float AC = uzaklik(xLoc[0],yLoc[0],xLoc[2],yLoc[2]);

    float BC = uzaklik(xLoc[1],yLoc[1],xLoc[2],yLoc[2]);


    if(AB == AC && AC == BC)
    printf("Bu ucgen bir es kenar ucgen");
    else if((AB==AC && AC != BC) || (AB==BC && BC !=AC) || AC==BC && BC != AB)
    printf("Bu ucgen bir ikizkenar ucgen");
    else if(AB != AC && AC != BC)
    printf("Bu ucgen ozel bir ucgen degil");
    return 0;
}

