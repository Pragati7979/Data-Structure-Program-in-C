#include<stdio.h>
int main(){
	int a[50],num,size,i,pos;
	printf("What is the size of your array:");
	scanf("%d",&size);
	printf("Enter the elements\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the number");
	scanf("%d",&num);
	printf("Enter the position:");
	scanf("%d",&pos);
	a[size]=a[pos-1]; // This Three lines are
	a[pos-1]=num;    //written to insert the number at given pos
	size++;        //and sending the present number at the last.
	printf("Display the elements\n");
	for(i=0;i<size;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}