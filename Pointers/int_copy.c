#include <stdio.h>

void int_copy(int *ptrA, int *ptrB, int nbr)
{
	for (int i = 0; i < nbr; i++)
	{
		ptrB[i] = ptrA[i];
	}
}

int main()
{
	int sourceArray[] = {1, 2, 3, 4, 5};
	int nbr = sizeof(sourceArray) / sizeof(sourceArray[0]);
	int destinationArray[nbr];
	int_copy(sourceArray, destinationArray, nbr);
	printf("Copied array: ");
	for (int i = 0; i< nbr; i++)
	{
		printf("%d", destinationArray[i]);
	}
	printf("\n");
	return 0;
}
