#include <stdio.h>

int main() { //Bir kenarı girilen karenin alanını ve çevresini hesaplayan program
  int kenar,cevre,alan; // Kenar ve çevreyi scan f ile alıp çevre değişkenine iem yapıyoruz sonra alan'da kenar ve kanarı çarpıyoruz
	printf("Kenar giriniz : ");
	scanf("%d",&kenar);
	printf("Cevre giriniz : ");
	scanf("%d",&cevre);
	printf("Alan giriniz : ");
	scanf("%d",&alan);
	
	cevre = 4 * kenar;
	alan = kenar * kenar;
	
	printf("Alan : %d \n",alan);
	printf("Cevre : %d \n",cevre);
  return 0;
}
