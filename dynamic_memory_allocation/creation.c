#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char name[20];
	int *scores;
	int num_scores;
}Student;

int main()
{
Student *s = (Student *)malloc(sizeof(Student));
if (s == NULL)
{
	fprintf(stderr, "Memory allocation failed\n");
	return 1;
}
strcpy(s->name, "John");
s->num_scores = 3;
// Dynamically allocate memory for scores
s->scores = (int *)malloc(s->num_scores * sizeof(int));
if (s->scores == NULL)
{
	fprintf(stderr, "Memory allocation for scores failed");
	free(s);
	return 1;
}
for (int i = 0; i < s->num_scores; i++)
{
	s->scores[i] = (i + 1) * 10;
}
printf("Name: %s, Scores: ", s->name);
for (int i = 0; i < s->num_scores; i++)
{
	printf("%d ", s->scores[i]);
}
printf("\n");
// free allocated memory
free(s->scores);
free(s);
return 0;
}
