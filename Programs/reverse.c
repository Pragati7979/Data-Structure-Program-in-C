#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r,sum=0;
	printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0)
	{
     r=n%10;
     sum=(10*sum)+r;
     n=n/10;
	}
    printf("reverse number=%d",sum);
return 0;
}	