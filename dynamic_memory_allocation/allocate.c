#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *array;
	int n = 5;
	array = (int *) malloc(n * sizeof(int));
	if (array == NULL)
	{
		printf("Memory allocation failed\n");
		return 1;
	}
	for (int i = 0; i < n; i++)
	{
		array[i] = i * 2;
		printf("%d ", array[i]);
	}
	free(array);
	return 0;
}
