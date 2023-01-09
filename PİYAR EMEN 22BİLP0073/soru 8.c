#include <stdio.h>

//Kullanıcıdan yaşını sorarak ay, hafta, gun, saat, dakika ve saniye olarak hesaplayan program.

main()
{
	int yas, ay, hafta, gun, saat, dakika, saniye;
	
	printf("Yasinizi giriniz...\n");
	scanf("%d", &yas);
	
	printf("Yasinizin ay olarak karsiligi: %d\n", yas * 12);
	printf("Yasinizin hafta olarak karsiligi: %d\n", yas * 52);
	printf("Yasinizin gun olarak karsiligi: %d\n", yas * 365);
	printf("Yasinizin saat olarak karsiligi: %d\n", yas * 365 * 24);
	printf("Yasinizin dakika olarak karsiligi: %d\n", yas * 365 * 24 * 60);
	printf("Yasinizin saniye olarak karsiligi: %d\n", yas * 365 * 24 * 60 * 60);
}
