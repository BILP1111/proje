#include <stdio.h>

int main(void)
{
	
	/*Bu uygulamada istenilen bilgileri de�i�ken olarak tan�mlad�ktan sonra kullan�c�dan ya� istedim.
	Sonras�nda ay,hafta,g�n,saat,dakika ve saniye hesaplamas�n� programa tan�mlad�m ve 
	Printf komutu ile yazd�rd�m*/
    int yas,ay,hafta,gun,saat,dakika,saniye;

    printf("Lutfen yasinizi girin: ");
    scanf("%d", &yas);

    ay = yas * 12;

    hafta = ay * 4;

    gun = hafta * 7;

    saat = gun * 24;

    dakika = saat * 60;

    saniye = dakika * 60;

    printf("Yasin ay olarak: %d ay\n", ay);
    
    printf("Yasin hafta olarak: %d hafta\n", hafta);
    
    printf("Yasin gun olarak: %d gun\n", gun);
    
    printf("Yasin saat olarak: %d saat\n", saat);
    
    printf("Yasin dakika olarak: %d dakika\n", dakika);
    
    printf("Yasin saniye olarak: %d saniye\n", saniye);

}
