#include<stdio.h>
int main(){
	int gcd , lcm , i , a ,b;
	printf("Enter number1:");
	scanf("%d",&a);
	printf("\nEnter number2:");
	scanf("%d",&b);
	int min = a<b ? a:b ;
	for(i=min ; i>=1 ; i--){
		if(a%i ==0 & b%i ==0){
			gcd = i;
			printf("GCD:%d",gcd);
			break;
		}
	}
	
}
