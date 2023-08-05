#include "includes/tests.h"

void test_substr(char const *input, unsigned int start, size_t len, char *expec_result)
{
	// Arrange
	char *act_result;

	// Act
	act_result = ft_substr(input, start, len);

	// Assert
	if (strcmp(act_result, expec_result) == 0)
	{
		printf("\033[32m[Success]\033[0m Expected: '%s'  Result: '%s'\n", expec_result, act_result);
	}
	else
	{
		printf("\033[31m[Failure]\033[0m Expected: '%s'  Result: '%s'\n", expec_result, act_result);
	}
	free(act_result);
}

int main(void)
{
	// Test 01
	char *test1_s = "12test1";
	size_t test1_start = 2;
	size_t test1_len = 4;
	char *test1_ex_result = "test";

	// Test 02
	char *test2_s = "123test123";
	size_t test2_start = 3;
	size_t test2_len = 8;
	char *test2_ex_result = "test123";

	// Test 03
	char *test3_s = "test";
	size_t test3_start = 0;
	size_t test3_len = 0;
	char *test3_ex_result = "";

	// Test 04
	char *test4_s = "Hello, World";
	size_t test4_start = 0;
	size_t test4_len = 20;
	char *test4_ex_result = "Hello, World";

	// Test 05
	char *test5_s = "Hello, World";
	size_t test5_start = 20;
	size_t test5_len = 20;
	char *test5_ex_result = "\0";

	// Function Call
	test_substr(test1_s, test1_start, test1_len, test1_ex_result);
	test_substr(test2_s, test2_start, test2_len, test2_ex_result);
	test_substr(test3_s, test3_start, test3_len, test3_ex_result);
	test_substr(test4_s, test4_start, test4_len, test4_ex_result);
	test_substr(test5_s, test5_start, test5_len, test5_ex_result);
	return (0);
}
