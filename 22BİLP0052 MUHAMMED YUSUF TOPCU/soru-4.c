#include <stdio.h>

int main() 
{
    int kenar;//De�er Atama

    printf("Lutfen karenin bir kenarinin uzunlugunu girin: ");
    scanf("%d", &kenar);

    int alan = kenar * kenar;
    int cevre = 4 * kenar;
//Alan ve �evre Form�lleri 
    printf("Karenin alani: %d\n", alan);
    printf("Karenin cevresi: %d\n", cevre);
//Alan� ve �evreyi ekrana yazd�ran program
    return 0;
}

