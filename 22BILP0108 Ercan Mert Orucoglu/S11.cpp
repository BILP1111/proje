#include <stdio.h>
#include <math.h>

// 1X,1Y,2X,2Y olarak 2 tane farkl� noktay� kullan�c�dan alan girilmesi gereken de�er olarak al�p 
// aralar�ndaki mesafeyi yazd�ran program

int main() {
    float ilkX,ilkY, ikinciX, ikinciY;
    printf("�lk kordinatin x'ini girin: ");
    scanf("%f",&ilkX);

    printf("�lk kordinatin y'sini girin: ");
    scanf("%f",&ilkY);

    printf("�kinci kordinatin x'ini girin: ");
    scanf("%f",&ikinciX);

    printf("�kinci kordinatin y'sini girin: ");
    scanf("%f",&ikinciY);
	
	printf("(%.2f, %.2f) kordinatiyla (%.2f, %.2f) kordinati arasindaki mesafe: %.2f",ilkX,ilkY,ikinciX,ikinciY,
        sqrt(powf(ilkX-ikinciX,2)+ powf(ilkY-ikinciY,2))
);
}
