#include<stdio.h>
int main() {
    int i, uzun, yan, k=0;  // uzun ve yan de�erlerini programa tan�tt�k
    printf("Sat�r Say�s� : ");   // kullan�c�ya sat�r say�s�n� soran yaz�y� yazd�rd�k
    scanf("%d", &yan);            // kullan�c� de�erin girdikten sonra o de�erin yan oldu�unu tan�tt�k
    for (i=1; i<=yan; ++i,k=0) {   // for d�ng�s� kullanarak  uzun de�eri 1 den ba�layan ve girilen yan de�erine kadar giden d�ng�y� yazd�k  
        for (uzun=1; uzun<=yan-i; ++uzun)
        { printf("*"); }          // burada girilen de�erlere g�re ekran ��kt�s� haz�rlan�r
        while (k!=2*i-1) {          // while d�ng�s� kullan�larak ko�ul sa�lanana kadar d�ng�y� d�nd�r�r�z. Buradaki ko�ul girilen de�erin piramit tamamlanana kadar ekrana yaz�lmas�d�r
            printf("*");
            ++k;
        }
        printf("\n");
    }    
    return 0;
}
