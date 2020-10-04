#include <stdio.h>
int main()
{
	int a[20];
	int size,num, i;
	printf("Enter the size of your array:");
	scanf("%d", &size);
	printf("Enter the elements in the array:\n");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the number where you want to add in the array:");
	scanf("%d", &num);
	for (i = size - 1; i >= 0; i--)
	{
		a[i + 1] = a[i];
	}
	a[0] = num;
	size++;
	printf("Displaying the elements of array\n:");
	for (i = 0; i < size; i++)
	{
		printf("%d,", a[i]);
	}
	return 0;
}