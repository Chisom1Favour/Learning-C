#include <stdio.h>
enum response_type {DUMP, SECOND_CHANCE, MARRIAGE};
typedef struct
{
	char *name;
	enum response_type type;
}response;

void dump(response r)
{
	printf("Dear %s\n", r.name);
	puts("Your last date won't be seeing you");
}
void second_chance(response r)
{
	printf("Dear %s\n", r.name);
	puts("Your last date contacted us with a marriage proposal");
}
void marriage(response r)
{
	printf("Dear %s\n", r.name);
	puts("COngratulations. Your last date contacted us with a marriage proposal");
}
void (*replies[]) (response) = {dump,second_chance, marriage};

int main()
{
	response r[] = {
		{"Mike", DUMP}, {"Luis", SECOND_CHANCE},
		{"Matt", SECOND_CHANCE}, {"William", MARRIAGE}
	};
	int i;
	for (i = 0; i < 4; i++)
	{
		(replies[r[i].type])(r[i]);
	}
	return 0;
}
