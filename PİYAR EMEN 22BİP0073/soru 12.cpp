#include <stdio.h>

//Yaþý girilen bir kiþinin seçimlerde oy verme yeterliliði olup olmadýðýný test eden program.

main()
{
	int yas;
	
	printf("Yasinizi giriniz...\n");
	scanf("%d", &yas);
		
	if(yas >= 18)
	{
		printf("Oy kullanabilirsiniz.");
	}
	
	else
	{
		printf("Oy kullanabilmek için biraz daha beklemelisiniz.");
	}
}
