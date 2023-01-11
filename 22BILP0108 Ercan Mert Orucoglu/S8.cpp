#include <stdio.h>

int main(void)
{
	
	/*Bu uygulamada istenilen bilgileri değişken olarak tanımladıktan sonra kullanıcıdan yaş istedim.
	Sonrasında ay,hafta,gün,saat,dakika ve saniye hesaplamasını programa tanımladım ve 
	Printf komutu ile yazdırdım*/
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
