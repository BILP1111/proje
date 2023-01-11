#include <stdio.h>

int main() 
{
    int vize, final; // int ve float ile 3 deðiþken tanýmladýk
    float ortalama;
    
    printf("Vize notunuzu girin:"); // deðer girilmesini isteyip girilen deðeri okuttuk
    scanf("%d",&vize);

    printf("Final notunuzu girin:"); // deðer girilmesini isteyip girilen deðeri okuttuk
    scanf("%d",&final);
       
    ortalama=(vize*0.4)+(final*0.6); // not hesaplama
    
    printf("Gecme notunuz : %2.2f", ortalama); // sonuç

}


