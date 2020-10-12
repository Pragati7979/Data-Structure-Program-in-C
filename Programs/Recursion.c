#include<stdio.h>

void printPattern(int n);

int main(){
	int n = 4 ;
	printPattern(n);
	return 0;
}

void printPattern(int n){
	int i;
	if(n==1){
		printf("*\n");
		return;
	}
	printf("%d\n",n);
	printPattern(n-1);
	for(i=0 ; i < (2*n-1) ; i++){
		printf("*");
	}
	printf("\n");
}
