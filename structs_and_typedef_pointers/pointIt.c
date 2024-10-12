#include <stdio.h>
#include <string.h>

struct tag
{
	char lname[20];
	char fname[20];
	int age;
	float rate;
};
struct tag my_struct;
void show_name(struct tag *p);

int main(void)
{
	struct tag *str_ptr;
	str_ptr = &my_struct;
	strcpy(my_struct.lname, "Jensen");
	strcpy(my_struct.fname, "Ted");
	printf("%s\n", my_struct.fname);
	printf("%s\n", my_struct.lname);
	my_struct.age = 61;
	show_name(str_ptr);
	return 0;
}

void show_name(struct tag *p)
{
	printf("%s\n", p->fname);
	printf("%s\n", p->lname);
	printf("%d\n", p->age);
}
