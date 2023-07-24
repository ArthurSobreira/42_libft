#include "includes/tests.h"

void	test_strlen(const char *input)
{
	// Arrange
	size_t	act_result;
	size_t	expec_result;

	// Act
	act_result = ft_strlen(input);
	
	// Assert
	expec_result = strlen(input);  // Call the original one

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
	char	*input1 = "te";
	char	*input2 = "tes";
	char	*input3 = "teste";
	char	*input4 = "teste123";
	char	*input5 = "";

	// Function Call
	test_strlen(input1);
	test_strlen(input2);
	test_strlen(input3);
	test_strlen(input4);
	test_strlen(input5);
	return(0);
}