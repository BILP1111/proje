/*Girilen bir sayinin faktoriyelini hesaplayan program*/

#include <stdio.h>
main()
{
	int i;
	int faktoriyel=1;
	int sayi;
	printf("Faktoriyeli Alinacak Sayiyi Girin :");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++)
	{
		faktoriyel=faktoriyel*i;
	}
	printf("Sonuc=%d",faktoriyel);
}
