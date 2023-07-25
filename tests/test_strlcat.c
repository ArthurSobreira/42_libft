#include "includes/tests.h"

void	test_strlcat(char *dest, const char *src, size_t size)
{
	// Arrange
	size_t act_result;
	size_t expec_result;
	char dest_copy[100];
	strcpy(dest_copy, dest);

	// Act
	act_result = ft_strlcat(dest, src, size);

	// Assert
	expec_result = strlcat(dest_copy, src, size); // Call strncat;

	if ((strcmp(dest_copy, dest) == 0) && (act_result == expec_result))
	{
		printf("\033[32m[Success]\033[0m Expected: %ld  Result: %ld\n",
				expec_result, act_result);
	}
	else
	{
		printf("\033[31m[Failure]\033[0m Expected: %ld  Result: %ld\n",
				expec_result, act_result);
	}
}

int	main(void)
{
	// Test 01
	char test1_dest[10] = "t";
	char *test1_src = "";
	int test1_size = 10;

	// Test 02
	char test2_dest[20] = "1234";
	char *test2_src = "5678";
	int test2_size = 20;

	// Test 04
	char test4_dest[10] = "hello";
	char *test4_src = "world";
	int test4_size = 3;

	// Test 03
	char test3_dest[10] = "hello";
	char *test3_src = "world";
	int test3_size = 11;

	// Test 05
    char test5_dest[5] = "Hi";
    char *test5_src = "";
    size_t test5_size = 5;

	// Function Call
	test_strlcat(test1_dest, test1_src, test1_size);
	test_strlcat(test2_dest, test2_src, test2_size);
	test_strlcat(test3_dest, test3_src, test3_size);
	test_strlcat(test4_dest, test4_src, test4_size);
	test_strlcat(test5_dest, test5_src, test5_size);
	return (0);
}