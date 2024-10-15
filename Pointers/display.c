#include <stdio.h>

float average(int *arr, int size)
{
	int sum;
	printf("arr: %p\n", &arr);
	printf("size: %p\n", &size);
	printf("sum: %p\n", &sum);

	for (int i = 0 ; i< size; i++)
	{
		sum += arr[i];
	}
	return (sum * 1.0f) / size;
}

int main()
{
	int array[] = {222, 23, 1, 45, 6, 7};
	int sizes = 6;
	average(array, sizes);
	return 0;
}
