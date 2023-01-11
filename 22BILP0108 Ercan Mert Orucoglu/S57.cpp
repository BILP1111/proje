//Girilen de�er ile ctype.h k�t�phanesinde bulunan toupper komutu ile harflerin b�y�k harfe �evrilmi� halini yaz�d�ran program

#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {


    char cumle[255];
    printf("Bir cumle giriniz:");
    
    scanf("%[^\n]", cumle);

    int length = strlen(cumle);

    for (int i = 0; i < length; ++i) {
        cumle[i] = toupper(cumle[i]);
}

    printf("Cumlenin duzenlenmis hali: %s", cumle);
}
