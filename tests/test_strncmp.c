#include "includes/tests.h"

void	test_strncmp(const char *s1, const char *s2, size_t n)
{
	// Arrange
	int	act_result;
	int	expec_result;

	// Act
	act_result = ft_strncmp(s1, s2, n);
	
	// Assert
	expec_result = strncmp(s1, s2, n);  // Call the original one

	if (expec_result == act_result)
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
	char	*test1_s1 = "t";
	char	*test1_s2 = "";
	int		test1_n = 0;

	// Test 02
	char	*test2_s1 = "1234";
	char	*test2_s2 = "1235";
	int		test2_n = 3;

	// Test 03
	char	*test3_s1 = "1234";
	char	*test3_s2 = "1235";
	int		test3_n = 4;

	// Test 04
	char	*test4_s1 = "1235";
	char	*test4_s2 = "1234";
	int		test4_n = 4;

	// Test 05
	char	*test5_s1 = "teste";
	char	*test5_s2 = "texto";
	int		test5_n = 4;

	// Function Call
	test_strncmp(test1_s1, test1_s2, test1_n);
	test_strncmp(test2_s1, test2_s2, test2_n);
	test_strncmp(test3_s1, test3_s2, test3_n);
	test_strncmp(test4_s1, test4_s2, test4_n);
	test_strncmp(test5_s1, test5_s2, test5_n);
	return(0);
}