#include <stdio.h>

int main(void) {
    char operator;
    double ilk_sayi, ikinci_sayi;

    while (1) {
        printf("Lutfen bir islem giriniz (+, -, *, /): ");
        scanf("%c", &operator);

        printf("Lutfen ilk sayiyi giriniz: ");
        scanf("%lf", &ilk_sayi);

        printf("Lutfen ikinci sayiyi giriniz: ");
        scanf("%lf", &ikinci_sayi);

        if (operator == '+') {
            printf("%.1lf + %.1lf = %.1lf\n", ilk_sayi, ikinci_sayi, ilk_sayi + ikinci_sayi);
        } else if (operator == '-') {
            printf("%.1lf - %.1lf = %.1lf\n", ilk_sayi, ikinci_sayi, ilk_sayi - ikinci_sayi);
        } else if (operator == '*') {
            printf("%.1lf * %.1lf = %.1lf\n", ilk_sayi, ikinci_sayi, ilk_sayi * ikinci_sayi);
        } else if (operator == '/') {
            if (ikinci_sayi == 0) {
                printf("Sifira bolum yapilamaz.\n");
            } else {
                printf("%.1lf / %.1lf = %.1lf\n", ilk_sayi, ikinci_sayi, ilk_sayi / ikinci_sayi);
            }
        } else {
            printf("Gecersiz islem.\n");
        }
    }

    return 0;
}
//"while" d�ng�s� kullan�larak kullan�c�n�n istedi�i s�rece tekrar �al��t�r�lmas� sa�lanm��t�r. 
//Kullan�c�dan bir i�lem girilmesi i�in bir "scanf" fonksiyonu kullan�lm��t�r. 
//Girilen i�leme g�re, kullan�c�dan iki say� girmesi i�in iki tane "scanf" fonksiyonu kullan�lm��t�r.
// Girilen say�lar "ilk_sayi" ve "ikinci_sayi" de�i�kenlerine atanm��t�r. 
