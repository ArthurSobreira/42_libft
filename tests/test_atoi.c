#include "includes/tests.h"

void	test_atoi(const char *nptr)
{
	// Arrange
	size_t	act_result;
	size_t	expec_result;

	// Act
	act_result = ft_atoi(nptr);
	
	// Assert
	expec_result = atoi(nptr);  // Call the original one

	if (expec_result == act_result)
	{
		printf("\033[32m[Success]\033[0m Expected: %ld  Result: %ld\n", expec_result, act_result);
	}
	else
	{
		printf("\033[31m[Failure]\033[0m Expected: %ld  Result: %ld\n", expec_result, act_result);
	}
}

int	main(void)
{
	char	*input1 = "123";
	char	*input2 = "-123";
	char	*input3 = "  123";
	char	*input4 = "+1234";
	char	*input5 = "+-123";

	// Function Call
	test_atoi(input1);
	test_atoi(input2);
	test_atoi(input3);
	test_atoi(input4);
	test_atoi(input5);
	return(0);
}