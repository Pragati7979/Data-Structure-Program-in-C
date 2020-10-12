#include<stdio.h>
int main(){
	int num,i;
	FILE *fp;
	fp = fopen("Tables.txt","w");
	printf("Enter the number you want table of:");
	scanf("%d",&num);
	fprintf(fp,"Table of %d\n",num);
	for(i=0;i<10;i++){
		fprintf(fp,"%d * %d = %d\n",num,i+1,num * (i+1));
	}
	//fclose(fp);
	return 0;
	}
