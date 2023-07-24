#include "includes/tests.h"

void	test_isascii(int input)
{
	// Arrange
	int	act_result;
	int expec_result;

	// Act
	act_result = ft_isascii(input);
	
	// Assert
	expec_result = isascii(input);

	if (expec_result > 0)
	{
		if (act_result > 0)
			printf("\033[32m[Success]\033[0m Expected: non-zero  Result: non-zero\n");
		else
			printf("\033[31m[Failure]\033[0m Expected: non-zero  Result: zero\n");
	}
	else if (expec_result == 0)
	{
		if (act_result == 0)
			printf("\033[32m[Success]\033[0m Expected: zero      Result: zero\n");
		else
			printf("\033[31m[Failure]\033[0m Expected: zero      Result: non-zero\n");
	}
}

int	main(void)
{
	int	input1 = 'A';
	int input2 = 'z';
	int input3 = '9';
	int	input4 = '~';
	int	input5 = ' ';
	int input6 = '\t';

	// Function Call
	test_isascii(input1);
	test_isascii(input2);
	test_isascii(input3);
	test_isascii(input4);
	test_isascii(input5);
	test_isascii(input6);
	return(0);
}