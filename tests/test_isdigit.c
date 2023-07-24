#include "includes/tests.h"

void	test_isdigit(int input)
{
	// Arrange
	int	act_result;
	int expec_result;

	// Act
	act_result = ft_isdigit(input);
	
	// Assert
	expec_result = isdigit(input);

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
	int	input1 = '1';
	int input2 = '5';
	int input3 = '9';
	int	input4 = 'z';
	int	input5 = 'A';
	int input6 = '\t';

	// Function Call
	test_isdigit(input1);
	test_isdigit(input2);
	test_isdigit(input3);
	test_isdigit(input4);
	test_isdigit(input5);
	test_isdigit(input6);
	return(0);
}