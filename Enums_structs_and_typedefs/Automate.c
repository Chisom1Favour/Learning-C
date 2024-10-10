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
	puts("Your last date won't be seeing us");
}

void second_chance(response r)
{
	printf("Dear %s\n", r.name);
	puts("Your last date asked us to arrange another meeting");
}
void marriage(response r)
{
	printf("Dear %s\n", r.name);
	puts("Congratulations your last date contacted us with a marriage proposal");
}

int main()
{
	response r[] = {
		{"Mike", DUMP},
		{"Luis", SECOND_CHANCE},
		{"Matt", MARRIAGE}
	};
	int i;
	for (i = 0; i < 4; i++)
	{
		switch (r[i].type)
		{
			case DUMP:
				dump(r[i]);
				break;
			case SECOND_CHANCE:
				second_chance(r[i]);
				break;
			default:
				marriage(r[i]);
		}
	}
}
