#include <stdio.h>

int main() {
    float not;
    printf("Ogrencinin notunu giriniz: ");
    scanf("%f",&not);

    printf("Ogrencinin notu: %s %s",not>=90?"AA":not >= 80?"BA":not >= 75?"BB":not >= 70?"CB":not >= 60?"CC":not >= 50?"DC":not >= 40?"DD":not >=30?"FD":"FF",not>=50?"Basarili":"Basarisiz");
    return 0;
}
