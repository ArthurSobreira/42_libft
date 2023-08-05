#include "includes/tests.h"

void test_calloc(size_t input, size_t size)
{
	// Arrange
	unsigned char *act_result;
	unsigned char *expec_result;
	size_t index;
	int all_zero;

	// Act
	act_result = ft_calloc(input, size);

	// Assert
	expec_result = calloc(input, size); // Call the original one
	index = 0;
	all_zero = 1;

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
	else
	{
		while (expec_result[index] == '\0')
		{
			if (act_result[index] != '\0')
			{
				all_zero = 0;
				break;
			}
			index++;
		}
		if (all_zero)
		{
			printf("\033[32m[Success]\033[0m Expected Allocation: %zu bytes\n", input * size);
		}
		else
		{
			printf("\033[31m[Failure]\033[0m Allocation Failed\n");
		}
		free(act_result);
		free(expec_result);
	}
}

int main(void)
{
	// Test 01
	size_t test1_input = 0;
	size_t test1_size = 0;

	// Test 02
	int test2_input = 123456;
	int test2_size = 123456;

	// Test 03
	int test3_input = 3;
	size_t test3_size = sizeof(int);

	// Test 04
	char test4_input = 10;
	size_t test4_size = sizeof(char);

	// Test 05
	size_t test5_input = 5;
	size_t test5_size = sizeof(size_t);

	// Function Call
	test_calloc(test1_input, test1_size);
	test_calloc(test2_input, test2_size);
	test_calloc(test3_input, test3_size);
	test_calloc(test4_input, test4_size);
	test_calloc(test5_input, test5_size);
	return (0);
}