#include <stdio.h>
#include <math.h>
int main() {
    float ilkX,ilkY, ikinciX, ikinciY;
    printf("Ilk kordinatin x ini giriniz: ");
    scanf("%f",&ilkX);

    printf("Ilk kordinatin y sini giriniz: ");
    scanf("%f",&ilkY);

    printf("Ikinci kordinatin x ini giriniz: ");
    scanf("%f",&ikinciX);

    printf("Ikinci kordinatin y sini giriniz: ");
    scanf("%f",&ikinciY);

    printf("(%.2f, %.2f) kordinatiyla (%.2f, %.2f) kordinati arasindaki mesafe: %.2f",ilkX,ilkY,ikinciX,ikinciY,sqrt(powf(ilkX-ikinciX,2)+ powf(ilkY-ikinciY,2)));
    return 0;
}
