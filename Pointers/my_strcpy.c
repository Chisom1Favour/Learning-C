#include <stdio.h>

// Another version of string.h's strcpy
char *my_strcpy(char *destination, char *source)
{
	char *p = destination;
	while (*source != '\0')
	{
		*p++ = *source++;
	}
	*p = '\0';
	return destination;
}

