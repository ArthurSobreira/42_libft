#include "includes/tests.h"

void test_memchr(const void *input, int c, size_t n)
{
	// Arrange
	const char *act_result;
	const char *expec_result;

	// Act
	act_result = ft_memchr(input, c, n);

	// Assert
	expec_result = memchr(input, c, n); // Call the original one

	if (expec_result == NULL)
	{
		if (act_result == NULL)
		{
			printf("\033[32m[Success]\033[0m Expected: NULL  Result: NULL\n");
		}
		else
		{
			printf("\033[31m[Failure]\033[0m Expected: NULL  Result: not NULL\n");
		}
	}
	else if (strcmp(act_result, expec_result) == 0)
	{
		printf("\033[32m[Success]\033[0m Expected: '%s'  Result: '%s'\n", expec_result, act_result);
	}
	else
	{
		printf("\033[31m[Failure]\033[0m Expected: '%s'  Result: '%s'\n", expec_result, act_result);
	}
}

int main(void)
{
	// Test 01
	const char *test1_str = "test1234";
	int test1_c = 's';
	int test1_n = 3;

	// Test 02
	const char *test2_str = "test1234";
	int test2_c = 's';
	int test2_n = 2;

	// Test 03
	const char *test3_str = "Hello, World!";
	int test3_c = ' ';
	int test3_n = strlen(test3_str);

	// Test 04
	const char *test4_str = "Hello, World!";
	int test4_c = 'Z';
	int test4_n = strlen(test4_str);

	// Test 05
	const char *test5_str = "abcdefghi";
	int test5_c = 'd';
	int test5_n = 6;

	// Function Call
	test_memchr(test1_str, test1_c, test1_n);
	test_memchr(test2_str, test2_c, test2_n);
	test_memchr(test3_str, test3_c, test3_n);
	test_memchr(test4_str, test4_c, test4_n);
	test_memchr(test5_str, test5_c, test5_n);
	return (0);
}