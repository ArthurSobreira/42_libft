#include "includes/tests.h"

void test_strdup(const char *input)
{
	// Arrange
	char *act_result;
	char *expec_result;

	// Act
	act_result = ft_strdup(input);

	// Assert
	expec_result = strdup(input); // Call the original one

	if (strcmp(act_result, expec_result) == 0)
	{
		printf("\033[32m[Success]\033[0m Expected: '%s'  Result: '%s'\n", expec_result, act_result);
	}
	else
	{
		printf("\033[31m[Failure]\033[0m Expected: '%s'  Result: '%s'\n", expec_result, act_result);
	}
	free(act_result);
	free(expec_result);
}

int main(void)
{
	const char *test1 = " \0";
	const char *test2 = " ";
	const char *test3 = " test  ";
	const char *test4 = "test123";
	const char *test5 = "~=??++$\0";

	// Function Call
	test_strdup(test1);
	test_strdup(test2);
	test_strdup(test3);
	test_strdup(test4);
	test_strdup(test5);
	return (0);
}