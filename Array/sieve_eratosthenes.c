#include <stdio.h>
int main()
{
	int size;
	printf("Enter the range : ");
	scanf("%d", &size);
	int a[size], i, j;
	for (i = 0; i < size; i++)
	{
		a[i] = i + 1;
	}
	//we will check upto the sqroot of the size
	//because after that kisi ka bhi multiple bacha nahi hoga.
	for (i = 1; i * i < size; i++)
	{
		if (a[i] != 0)
		{
			for (j = i + 1; j < size; j++)
			{
				if (a[j] % a[i] == 0)
				{
					a[j] = 0;
				}
			}
		}
	}

	printf("The prime number from 1 to %d are :\n", size);
	for (i = 1; i < size; i++)
	{
		if (a[i] != 0)
			printf("%d,", a[i]);
	}
	return 0;
}