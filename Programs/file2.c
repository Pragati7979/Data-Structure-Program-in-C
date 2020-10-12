#include<stdio.h>
int main(){
	int a,b,c;
	FILE *fp;
	fp = fopen("pragati.txt","r");
	fscanf(fp,"%d %d %d",&a,&b,&c);
	printf("%d\n%d\n%d",a,b,c);
}
