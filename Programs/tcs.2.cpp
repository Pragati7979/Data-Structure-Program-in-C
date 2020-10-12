#include<stdio.h>

int main(){
	int f=-1,l=-1,i;
	int arr[]={1,2,3,3,2,2,2,3,3,4,6};
	for(i=0;i<11;i++){
		if(arr[i]==2){
			if(f==-1){
				f=i;
				l=i;
			}
			else if(f!=-1){
				l=i;
			}
		}
	}
	
if(f==-1){
	printf("element not present");
	
}
else{
	printf("2 first occur at %d and last occured at %d",f,l);
}
return 0;
}
