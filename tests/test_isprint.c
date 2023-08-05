#include "includes/tests.h"

void test_isprint(int input)
{
	// Arrange
	int act_result;
	int expec_result;

	// Act
	act_result = ft_isprint(input);

	// Assert
	expec_result = isprint(input); // Call the original one

	if (expec_result > 0)
	{
		if (act_result > 0)
			printf("\033[32m[Success]\033[0m Expected: non-zero  Result: non-zero\n");
		else
			printf("\033[31m[Failure]\033[0m Expected: non-zero  Result: zero\n");
	}
	else if (expec_result == 0)
	{
		if (act_result == 0)
			printf("\033[32m[Success]\033[0m Expected: zero      Result: zero\n");
		else
			printf("\033[31m[Failure]\033[0m Expected: zero      Result: non-zero\n");
	}
}

int main(void)
{
	int input1 = 'A';
	int input2 = 'z';
	int input3 = '9';
	int input4 = '~';
	int input5 = ' ';
	int input6 = '\t';

	// Function Call
	test_isprint(input1);
	test_isprint(input2);
	test_isprint(input3);
	test_isprint(input4);
	test_isprint(input5);
	test_isprint(input6);
	return (0);
}