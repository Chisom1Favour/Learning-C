#include <stdio.h>
#include <string.h>
char uppercase(char *s)
{
	for (int i = 0, n = strlen(s); i < n; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			printf("%c", s[i] - 32);
		}
		else
		{
			printf("%c", s[i]);
		}
	}
	printf("\n");
}

int main()
{
	char car[] = "David";
	uppercase(car);
	return 0;
}
