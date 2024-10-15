#include <stdio.h>

void exceptionExmaple()
{
	int *pi = NULL;
	__try
	{
		pi = (int*)malloc(sizeof(int));
		*pi = 5;
		printf("%d\n", *pi);
	}
	__finally
	{
		free(pi);
	}
}

int main()
{
	exceptionExample();
	return 0;
}
