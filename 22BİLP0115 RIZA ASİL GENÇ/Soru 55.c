#include<stdio.h>
#include<stdlib.h>

int main()
{
	char cumle[100];
	int i;
	printf("Lutfen bir cumle giriniz:");
	gets(cumle);
	
	for(i=strlen(cumle);i>=0;i--)
	{
		printf("%c",cumle[i]);
	}
	return 0;
}
