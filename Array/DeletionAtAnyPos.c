#include <stdio.h>
int main()
{
	int a[20];
	int size, pos,i,item;
	printf("Enter the size of your array:");
	scanf("%d", &size);
	printf("Enter the elements in the array:\n");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the position from where you want to delete the element:");
	scanf("%d", &pos);
	if(pos<=0 || pos>size){
		printf("Invalid position");
	}
	else{
	   item=a[pos-1];
	printf("Deleted element=%d", item);
	for(i=pos-1;i<size-1;i++){
		a[i]=a[i+1];
	}
	size--;
	printf("\nDisplaying the elements of array\n:");
	for (i = 0; i < size; i++)
	{
		printf("%d,", a[i]);
	}	
	}
	
	return 0;
}