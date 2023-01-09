#include<stdio.h>

//1'den 25'e ileri ve 25'den 1'e geri sayan program.

main(){
	for(int i=1; i <= 25; i++){
		printf("%d\n", i);
	}
	
	printf("\n");
	
	for(int i=25; i >= 1; i--){
		printf("%d\n", i);
	}
}
