#include <stdio.h>
main()
{
	int mesafe,hiz,zaman;
	printf("Mesafeyi giriniz\n",mesafe);
	scanf("%d",&mesafe);
	printf("Varis zamanini seciniz\n",zaman);
	scanf("%d",&zaman);
	hiz=mesafe/zaman;
	printf("Gitmeniz geren hiz %d dir.",hiz);
	return 0;
}