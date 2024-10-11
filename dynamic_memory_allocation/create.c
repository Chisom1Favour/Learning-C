#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char name[5];
	int age;
}Person;

int main()
{
	int n;
	printf("Enter number of persons: ");
	scanf("%d", &n);
	// Dynamically allocate an array of Persons
	Person *people = (Person *)malloc(n * sizeof(Person));
	// Check for successful allocation
	if (people == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		return 1;
	}
	for (int i = 0; i < n; i++)
	{
		printf("Enter name for person %d: ", i + 1);
		scanf("%s", people[i].name);
		printf("Enter age for person %d: ", i + 1);
		scanf("%d", &people[i].age);
	}
	for (int i = 0; i < n; i++)
	{
		printf("Person %d: Name: %s, Age: %d\n", i + 1, people[i].name, people[i].age);
	}
	free(people);
	return 0;
}
