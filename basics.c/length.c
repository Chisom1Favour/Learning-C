#include <stdio.h>

int length_of_string(char s[])
{
	int count = 0;
	while (s[count] != '\0')
		
	{
		count++;
	}
	return count;
}

int main()
{
	int s1, s2;
	char string1[] = "This is good";
	char string2[] = "Wow, coolll";
	s1 = length_of_string(string1);
	s2 = length_of_string(string2);
	printf("%d  %d\n", s1, s2);
	return 0;
}

