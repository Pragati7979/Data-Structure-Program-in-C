#include <stdio.h>
int main()
{
	int a[20];
	int size, pos, num, i;
	printf("Enter the size of your array:");
	scanf("%d", &size);
	printf("Enter the elements in the array:\n");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the number where you want to add in the array:");
	scanf("%d", &num);
	printf("Enter the position where you want to add the element:");
	scanf("%d", &pos);
	for (i = size - 1; i >= pos - 1; i--)
	{
		a[i + 1] = a[i];
	}
	a[pos - 1] = num;
	size++;
	printf("Displaying the elements of array\n:");
	for (i = 0; i < size; i++)
	{
		printf("%d,", a[i]);
	}
	return 0;
}