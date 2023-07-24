#include "includes/tests.h"

void	test_strlcpy(char *dest, const char *src, size_t size)
{
	// Arrange
	size_t act_result;
	size_t expec_result;
	char dest_copy[100];
	strcpy(dest_copy, dest);

	// Act
	act_result = ft_strlcpy(dest, src, size);

	// Assert
	strncpy(dest_copy, src, size); // Call strcpy
	expec_result = strlen(src);

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
	char test1_dest[5];
	char *test1_src = "1234";
	int test1_size = 6;

	// Test 2
    char test2_dest[5] = "123";
    char *test2_src = "456";
    size_t test2_size = 5;

    // Test 3
    char test3_dest[10] = "Short";
    char *test3_src = "String";
    size_t test3_size = 0;

    // Test 4
    char test4_dest[10] = "Hello";
    char *test4_src = "World";
    size_t test4_size = 8;

    // Test 5
    char test5_dest[10] = "Hi";
    char *test5_src = "";
    size_t test5_size = 5;

	test_strlcpy(test1_dest, test1_src, test1_size);
	test_strlcpy(test2_dest, test2_src, test2_size);
    test_strlcpy(test3_dest, test3_src, test3_size);
    test_strlcpy(test4_dest, test4_src, test4_size);
    test_strlcpy(test5_dest, test5_src, test5_size);
	return (0);
}