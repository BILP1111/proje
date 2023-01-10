#include <stdio.h>
#include <math.h>

/*
 * Girilmiş olan 2 x,y noktasının birbirine olan uzaklığını veren fonksiyon
 */

float uzaklik(float x1, float y1, float x2, float y2) {
    return sqrt(powf(x1-x2,2)+ powf(y1-y2,2));
}

/*
 * Bir array yardımı ile kullanıcıdan 3 tane x, y kordinatlı ücgen kenarları istedikten sonra
 * kenarlar arasındaki uzaklıkları bulan ardından her uzaklık eşit ise eş kenar, 2 uzaklık eşit ise ikizkenar
 * her kenar uzaklıkları farkli ise özel bir üçgen olmadığını yazan bir program
 */

int main() {
    float xLoc[3];
    float yLoc[3];

    for (int i = 0; i < 3; ++i) {
        printf("%i. üçgenin kenarının x koordinatını girin: ",i);
        float var;

        scanf("%f", &var);
        xLoc[i] = var;

        printf("%i. üçgenin kenarının y koordinatını girin: ",i);

        scanf("%f", &var);
        yLoc[i] = var;
    }

    float AB = uzaklik(xLoc[0],yLoc[0],xLoc[1],yLoc[1]);
    float AC = uzaklik(xLoc[0],yLoc[0],xLoc[2],yLoc[2]);

    float BC = uzaklik(xLoc[1],yLoc[1],xLoc[2],yLoc[2]);


    if(AB == AC && AC == BC)
        printf("Bu üçgen bir eş kenar üçgen");
    else if((AB==AC && AC != BC) || (AB==BC && BC !=AC) || AC==BC && BC != AB)
        printf("Bu üçgen bir ikizkenar üçgen");
    else if(AB != AC && AC != BC)
        printf("Bu üçgen özel bir üçgen değil");



    return 0;
}


