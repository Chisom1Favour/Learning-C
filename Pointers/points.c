#include <stdio.h>

char strA[30] = "This string looks good";
char strB[40];

int main(void)
{
	char *pA, *pB;
	puts(strA);
	pA = strA;
	puts(pA);
	pB = strB;
	puts(pB);
	putchar('\n');
	while (*pA != '\0')
	{
		*pB++ = *pA++;
	}
	*pB = '\0';
	puts(strB);
	return 0;
}
