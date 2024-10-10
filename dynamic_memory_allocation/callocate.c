#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *array;
	int n = 5;
	array = (int *)calloc(n, sizeof(int));
	if (array = NULL)
	{
		printf("Memory allocation failed\n");
		return 1;
	}
	printf("Array allocated at: %p\n", (void *)array);
	printf("Array size: %d\n", n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", array[i]);
	}
	free(array);
	return 0;
}
