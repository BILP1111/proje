#include <stdio.h>

int main() 
{
    int vize, final; // int ve float ile 3 de�i�ken tan�mlad�k
    float ortalama;
    
    printf("Vize notunuzu girin:"); // de�er girilmesini isteyip girilen de�eri okuttuk
    scanf("%d",&vize);

    printf("Final notunuzu girin:"); // de�er girilmesini isteyip girilen de�eri okuttuk
    scanf("%d",&final);
       
    ortalama=(vize*0.4)+(final*0.6); // not hesaplama
    
    printf("Gecme notunuz : %2.2f", ortalama); // sonu�

}


