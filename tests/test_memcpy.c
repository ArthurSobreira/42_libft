#include "includes/tests.h"

void test_memcpy(void *dest, const void *src, size_t n)
{
	// Arrange
	unsigned char *act_result;
	unsigned char *expec_result;

	// Act
	act_result = ft_memcpy(dest, src, n);

	// Assert
	expec_result = memcpy(dest, src, n); // Call the original one

	if (memcmp(act_result, expec_result, n) == 0)
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
	char test1_dest[0];
	char *test1_src = "test1234";
	int test1_n = strlen(test1_src);

	// Test 02
	char test2_dest[0];
	char *test2_src = "test1234";
	int test2_n = 4;

	// Test 03
	char test3_dest[20] = "Hello,";
	char *test3_src = " World!";
	int test3_n = strlen(test3_src) + 1;

	// Test 04
	int test4_dest[3] = {100, 200, 300};
	int test4_src[] = {1000, 2000, 3000};
	int test4_n = sizeof(test4_src);

	// Test 05
	char test5_src[20] = "Hello, World";
	int test5_n = 5;

	// Function Calls
	test_memcpy(test1_dest, test1_src, test1_n);
	test_memcpy(test2_dest, test2_src, test2_n);
	test_memcpy(test3_dest, test3_src, test3_n);
	test_memcpy(test4_dest, test4_src, test4_n);
	test_memcpy(test5_src + 2, test5_src, test5_n);
	return (0);
}