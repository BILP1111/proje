 // CM OLARAK ALINAN MESAFE VE DAK�KAYI DE���KEN OLARAK ATATIKTAN SONRA KULLANICIDAN 2 DE�ER� G�RMES�N� �STEY�P SONUCUNDA
 // MESAFE/DAK�KA OLARAK HESAPLATIP EKRANA YAZDIRDIM

#include <stdio.h>

int main() {
	
    float mesafe, dakika;
    printf("Mesafeyi girin (cm): ");
    scanf("%f",&mesafe);

    printf("Varis suresi (dakika): ");
    scanf("%f",&dakika);

    printf("Gidilmesi gerekilen hiz: %.2fcm/dk", mesafe/dakika);
}
