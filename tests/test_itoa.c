#include "includes/tests.h"

void	test_itoa(int input)
{
	// Arrange
	char	*act_result;
	char	expec_result[20];

	// Act
	act_result = ft_itoa(input);

	// Assert
	snprintf(expec_result, sizeof(expec_result), "%d", input);
	
	if (strcmp(act_result, expec_result) == 0)
	{
		printf("\033[32m[Success]\033[0m Expected: '%s'  Result: '%s'\n", expec_result, act_result);
	}
	else
	{
		printf("\033[31m[Failure]\033[0m Expected: '%s'  Result: '%s'\n", expec_result, act_result);
	}
	free((char *)act_result);
}

int	main(void)
{
	int	test1 = 0;
	int	test2 = -9;
	int	test3 = 1234;
	int	test4 = 2147483647;
	int	test5 = -2147483648;

	// Function Call
	test_itoa(test1);
	test_itoa(test2);
	test_itoa(test3);
	test_itoa(test4);
	test_itoa(test5);
	return(0);
}