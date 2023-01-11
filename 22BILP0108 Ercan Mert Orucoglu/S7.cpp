 // CM OLARAK ALINAN MESAFE VE DAKÝKAYI DEÐÝÞKEN OLARAK ATATIKTAN SONRA KULLANICIDAN 2 DEÐERÝ GÝRMESÝNÝ ÝSTEYÝP SONUCUNDA
 // MESAFE/DAKÝKA OLARAK HESAPLATIP EKRANA YAZDIRDIM

#include <stdio.h>

int main() {
	
    float mesafe, dakika;
    printf("Mesafeyi girin (cm): ");
    scanf("%f",&mesafe);

    printf("Varis suresi (dakika): ");
    scanf("%f",&dakika);

    printf("Gidilmesi gerekilen hiz: %.2fcm/dk", mesafe/dakika);
}
