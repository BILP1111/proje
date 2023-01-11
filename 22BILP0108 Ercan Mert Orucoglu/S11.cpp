#include <stdio.h>
#include <math.h>

// 1X,1Y,2X,2Y olarak 2 tane farklý noktayý kullanýcýdan alan girilmesi gereken deðer olarak alýp 
// aralarýndaki mesafeyi yazdýran program

int main() {
    float ilkX,ilkY, ikinciX, ikinciY;
    printf("Ýlk kordinatin x'ini girin: ");
    scanf("%f",&ilkX);

    printf("Ýlk kordinatin y'sini girin: ");
    scanf("%f",&ilkY);

    printf("Ýkinci kordinatin x'ini girin: ");
    scanf("%f",&ikinciX);

    printf("Ýkinci kordinatin y'sini girin: ");
    scanf("%f",&ikinciY);
	
	printf("(%.2f, %.2f) kordinatiyla (%.2f, %.2f) kordinati arasindaki mesafe: %.2f",ilkX,ilkY,ikinciX,ikinciY,
        sqrt(powf(ilkX-ikinciX,2)+ powf(ilkY-ikinciY,2))
);
}
