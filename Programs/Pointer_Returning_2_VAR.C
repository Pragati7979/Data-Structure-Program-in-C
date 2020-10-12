#include<stdio.h>
void sumAndAvg(int a, int b, int *sum,float *avg){
	*sum = a+b;
	*avg = (float)(*sum)/2;
}

void sumAndAvg1(int a, int b){
	int sum = a+b;
	float avg = (float)(sum)/2;
}


int main(){
	int a=1,b=2;
	int sum ;
	float avg;
	sumAndAvg1(a,b);
	printf("Sum = %d\n",sum);
	printf("Average = %.2f\n",avg);
	printf("Using Pointer\n");
	sumAndAvg(a,b,&sum,&avg);
	printf("Sum = %d\n",sum);
	printf("Average = %.2f\n",avg);
	
	return 0;
}
