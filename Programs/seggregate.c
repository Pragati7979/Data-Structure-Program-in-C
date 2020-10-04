#include<stdio.h>
int main(){
	int arr[]={1,1,1,0,0,0,1};
	int size = 8;
	int left= 0,right=7,i,count;
	for(i=0;i<size;i++){
		if(arr[i]==0){
			count++;
		}
	}
	for(i=0;i<count;i++){
		arr[i]=0;
	}
	
	for(i=count;i<size;i++){
		arr[i]=1;
	}
	
	for(i=0;i<size;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
