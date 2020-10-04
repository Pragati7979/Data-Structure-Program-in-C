#include<stdio.h>
int main(){
	int arr[]={1,0,1,0,1,1,0,0};
	int size = 8;
	int left=0,right=7,i;
	while(left<=right){
		if(arr[left]==0){
			left++;
		}
		if(arr[right]==1){
			right--;
		}
		if(arr[left]!=0){
			arr[left]=0;
			left++;
		}
		if(arr[right]!=1){
			arr[right]=1;
			right--;
		}
	}
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}	return 0;
}

