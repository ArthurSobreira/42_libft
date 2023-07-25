#include "includes/tests.h"

void	test_strrchr(const char *input, int c)
{
	// Arrange
	const char	*act_result;
	const char	*expec_result;

	// Act
	act_result = ft_strrchr(input, c);

	// Assert
	expec_result = strrchr(input, c);  // Call the original one

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

int	main(void)
{
	// Test 01
	const char	*test1_str = "test1234";
	int			test1_c = 't';

	// Test 02
	const char	*test2_str = "test1234";
	int			test2_c = '1';

	// Test 03
	const char	*test3_str = "Hello, World!";
	int			test3_c = ' ';

	// Test 04
	const char	*test4_str = "Hello, World!";
	int			test4_c = '\0';

	// Test 05
	const char	*test5_str = "abcdefghi";
	int			test5_c = 'j';

	// Function Call
	test_strrchr(test1_str, test1_c);
	test_strrchr(test2_str, test2_c);
	test_strrchr(test3_str, test3_c);
	test_strrchr(test4_str, test4_c);
	test_strrchr(test5_str, test5_c);
	return(0);
}