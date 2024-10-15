#include <stdio.h>

void passAddressOfConstants(const int* num1, int* num2)
{
	*num2 = *num1;
}

int main()
{
	const int limit = 50;
	int result = 5;
	passAddressOfConstants(&limit, &result);
	return 0;
}
