//haftanın gün numarasına karşılık gelen gün adını veren program


#include <stdio.h>

int main()
{
   
    int gun_num;
    printf("Haftanin gun numarasini girin (1 ile 7 arasinda): ");
    scanf("%d",&gun_num);

   
    char *gun_adi;
    switch (gun_num) {
        case 1:
            gun_adi ="Pazartesi";
            break;
        case 2:
            gun_adi ="Sali";
            break;
        case 3:
            gun_adi ="Carsamba";
            break;
        case 4:
            gun_adi ="Persembe";
            break;
        case 5:
            gun_adi ="Cuma";
            break;
        case 6:
            gun_adi ="Cumartesi";
            break;
        case 7:
            gun_adi ="Pazar";
            break;
        default:
            gun_adi ="Gecersiz gun numarasi";
            break;
    }

    // gün adını ekrana yaz
    printf("Gun adi: %s\n",gun_adi);

    return 0;
}
