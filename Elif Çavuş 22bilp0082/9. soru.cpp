#include <stdio.h>
int main()
{
	int sayi;
	printf("Bir sayi giriniz :\n",sayi);
	scanf("%d",&sayi);
	
	if (sayi%2==0)
	{
		printf("Bu sayi cifttir\n");
	}
	else
		printf("Bu sayi tektir.\n");
	
	return 0;
}