#include <stdio.h>
#include <stdlib.h>

void safeFree(void **pp)
{
	if (pp != NULL && *pp != NULL)
	{
		free(*pp);
		*pp = NULL;
	}
}

#define safeFreeMacro(p) safeFree((void**)&(p))
int main()
{
	int *pi;
	pi = (int*)malloc(sizeof(int));
	*pi = 5;
	printf("Before: %p\n", (void*)pi);
	safeFree((void**)&pi);
	printf("After: %p\n", (void*)pi);
	safeFree((void**)&pi);
	return (EXIT_SUCCESS);
}
