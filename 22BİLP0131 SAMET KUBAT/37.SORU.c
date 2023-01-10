#include <stdio.h>

struct car {
    char name[50];
    int age;
    char model[50];
    int price;
};

int main() {
    struct car c;

    printf("isim gir: ");
    scanf("%s", c.name);

    printf("isim gir : ");
    scanf("%d", &c.age);

    printf("Emodeli girin: ");
    scanf("%s", c.model);

    printf("ücret girin: ");
    scanf("%d", &c.price);

    printf("\nDisplaying Information:\n");
    printf("Name: %s\n", c.name);
    printf("Age: %d\n", c.age);
    printf("Model: %s\n", c.model);
    printf("Price: %d\n", c.price);

    return 0;
}

