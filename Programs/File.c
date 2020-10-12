#include<stdio.h>
int main(){
	FILE *fp;
	fp = fopen("pragati.txt","r");
	char c = fgetc(fp);
	while(c!=EOF){
		printf("%c",c);
		c = fgetc(fp);
	}
	return 0;
}
