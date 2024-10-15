#include <stdio.h>
#include <stdlib.h>
int* allocateArray(int *arr, int size, int value)
{
	if (arr != NULL)
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = value;
		}
		return arr;
	}
}

int main()
{
	int* vector = (int*)malloc(5 * sizeof(int));
	allocateArray(vector, 5, 45);
	free(vector);
	return 0;
}
