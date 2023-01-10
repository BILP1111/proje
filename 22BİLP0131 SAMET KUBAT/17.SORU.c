#include <stdio.h>

int main(){
	
    int n, i;

    printf("Bir tamsayi girin: ");
    scanf("%d",&n);

    for(i=1; i<=10; ++i)
    {	
    
    printf("%d * %d = %d \n", n, i, n*i);
    }
    return 0;
}


// döngüye aldýk 1 ile 10 arasýnda sonra printf ile deðiþkeni çarptýrýp erkana yazdýrdýk.//
 
