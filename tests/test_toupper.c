#include "includes/tests.h"

void	test_toupper(int input)
{
	// Arrange
	int	act_result;
	int	expec_result;

	// Act
	act_result = ft_toupper(input);
	
	// Assert
	expec_result = toupper(input);  // Call the original one

	if (expec_result == act_result)
	{
		printf("\033[32m[Success]\033[0m Expected: %c  Result: %c\n", expec_result, act_result);
	}
	else
	{
		printf("\033[31m[Failure]\033[0m Expected: %c  Result: %c\n", expec_result, act_result);
	}
}

int	main(void)
{
	int	input1 = 'A';
	int	input2 = 'a';
	int	input3 = 'Z';
	int	input4 = 'z';
	int	input5 = '4';

	// Function Call
	test_toupper(input1);
	test_toupper(input2);
	test_toupper(input3);
	test_toupper(input4);
	test_toupper(input5);
	return(0);
}