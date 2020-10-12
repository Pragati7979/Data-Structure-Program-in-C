#include<stdio.h>

void split(char *name,int start , int end){
	
	int i =0;
	while((start+i)< end){
		name[i] = name[start+i];
		i++; 
	}
	name[i]= '\0';
	
}

int main(){
	char name[] = "PragatiSrivastava";
	split(name,0,7);
	printf("%s",name);
	return 0;
}
