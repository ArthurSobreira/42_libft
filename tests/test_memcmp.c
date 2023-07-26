#include "includes/tests.h"

void	test_memcmp(const void *s1, const void *s2, size_t n)
{
	// Arrange
	int	act_result;
	int	expec_result;

	// Act
	act_result = ft_memcmp(s1, s2, n);

	// Assert
	expec_result = memcmp(s1, s2, n);  // Call the original one


	if (act_result == expec_result)
	{
		printf("\033[32m[Success]\033[0m Expected: %d  Result: %d\n", expec_result, act_result);
	}
	else
	{
		printf("\033[31m[Failure]\033[0m Expected: %d  Result: %d\n", expec_result, act_result);
	}
}

int	main(void)
{
	// Test 01
	char	test1_s1[] = "";
	char	test1_s2[] = "";
	int		test1_n = 0;

	// Test 02
	char	test2_s1[] = "Hello";
	char	test2_s2[] = "Hellow";
	int		test2_n = 5;

	// Test 03
	char	test3_s1[] = "Hello";
	char	test3_s2[] = "World";
	int		test3_n = strlen(test3_s1);

	// Test 04
	char	test4_s1[] = "World";
	char	test4_s2[] = "Hello";
	int		test4_n = strlen(test3_s1);

	// Test 05
	char	test5_s1[] = {1, 2, 3, 4, 5};
	char	test5_s2[] = {1, 2, 3, 4, 6};
	int		test5_n = sizeof(test5_s1);

	// Function Call
	test_memcmp(test1_s1, test1_s2, test1_n);
	test_memcmp(test2_s1, test2_s2, test2_n);
	test_memcmp(test3_s1, test3_s2, test3_n);
	test_memcmp(test4_s1, test4_s2, test4_n);
	test_memcmp(test5_s1, test5_s2, test5_n);
	return(0);
}