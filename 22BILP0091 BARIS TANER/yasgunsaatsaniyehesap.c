#include <stdio.h>

int main() { // Kullanıcıdan yaşını sorarak ay,hafta,gun,saat,dakika ve saniye olarak hesaplayan program
    int yas = 0;
    int ay = 0;
    int hafta = 0;
    long gun = 0;
    long saat = 0;
    long dakika = 0;
    long saniye = 0;
        
    printf("Yasinizi giriniz : ");
    scanf("%d",&yas); // Matematik işlemleri bu değişkenlerle yapılıyor
    ay = (int) yas * 12;
    hafta = (int) yas * 52;
    gun = (long) yas * 365;
    saat = (long) yas * 365 * 24;
    dakika = (long) yas * 365 * 24 * 60;
    saniye = (long) yas * 365 * 24 * 60 * 60;
    
    printf("Yasiniz %d olduguna gore\n",yas);
    
    printf(" %d ay yasamissiniz \n",ay);
    printf(" %d hafta \n", hafta);
    printf(" %ld  gun \n", gun);
    printf(" %ld  saat \n", saat);
    printf(" %ld  dakika \n", dakika);
    printf(" %ld  saniye \n", saniye);
    printf(" yasamissiniz. \n");
    return 0;
}