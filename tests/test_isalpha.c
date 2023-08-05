#include "includes/tests.h"

void test_isalpha(int input)
{
	// Arrange
	int act_result;
	int expec_result;

	// Act
	act_result = ft_isalpha(input);

	// Assert
	expec_result = isalpha(input);

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
	int input2 = 'Z';
	int input3 = 'a';
	int input4 = 'z';
	int input5 = '0';
	int input6 = '\t';

	// Function Call
	test_isalpha(input1);
	test_isalpha(input2);
	test_isalpha(input3);
	test_isalpha(input4);
	test_isalpha(input5);
	test_isalpha(input6);
	return (0);
}