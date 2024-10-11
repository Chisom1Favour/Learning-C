#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char name[20];
	int age;
}Person;

int main()
{
	// Dynamically allocate memory for one Person
	Person *p = (Person *)malloc(sizeof(Person));
	if (p ==NULL)
	{
		fprintf(stderr, "Memory allocation failed");
		return 1;
	}
	strcpy(p->name, "Alice");
	p->age = 30;
	printf("Name: %s, Age: %d\n", p->name, p->age);
	free(p);
	return 0;
}
