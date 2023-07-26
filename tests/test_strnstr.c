#include "includes/tests.h"

void	test_strnstr(const char *big, const char *little, size_t len)
{
	// Arrange
	char	*act_result;
	char	*expec_result;

	// Act
	act_result = ft_strnstr(big, little, len);
	
	// Assert
	expec_result = strnstr(big, little, len);  // Call the original one

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
	else if (strcmp(expec_result, act_result) == 0)
	{
		printf("\033[32m[Success]\033[0m Expected: '%s'  Result: '%s'\n", expec_result, act_result);
	}
	else
	{
		printf("\033[31m[Failure]\033[0m Expected: '%s'  Result: '%s'\n", expec_result, act_result);
	}
}

int	main(void)
{
	// Test 01
	char	*test1_big = "teste12345";
	char	*test1_little = "ste";
	int		test1_len = 5;

	// Test 02
	char	*test2_big = "teste12345";
	char	*test2_little = "str";
	int		test2_len = 2;

	// Test 03
	char	*test3_big = "teste12345";
	char	*test3_little = "678";
	int		test3_len = 10;

	// Test 04
	char	*test4_big = "teste12345";
	char	*test4_little = "";
	int		test4_len = 0;

	// Test 05
	char	*test5_big = "Hello, World!";
	char	*test5_little = " ";
	int		test5_len = 10;

	// Function Call
	test_strnstr(test1_big, test1_little, test1_len);
	test_strnstr(test2_big, test2_little, test2_len);
	test_strnstr(test3_big, test3_little, test3_len);
	test_strnstr(test4_big, test4_little, test4_len);
	test_strnstr(test5_big, test5_little, test5_len);
	return(0);
}