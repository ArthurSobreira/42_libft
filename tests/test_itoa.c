#include "includes/tests.h"

void	test_itoa(int input)
{
	// Arrange
	const char	*act_result;
	//const char	*expec_result;

	// Act
	act_result = ft_itoa(input);

	// Assert
	//expec_result = itoa(input);  // Call the original one
	
	printf("Resultado: %s\n", act_result);
	//if (strcmp(act_result, expec_result) == 0)
	//{
	//	printf("\033[32m[Success]\033[0m Expected: '%s'  Result: '%s'\n", expec_result, act_result);
	//}
	//else
	//{
	//	printf("\033[31m[Failure]\033[0m Expected: '%s'  Result: '%s'\n", expec_result, act_result);
	//}
	free((char *)act_result);
    //free((char *)expec_result);
}

int	main(void)
{
	int	test1 = -22;
	//int	test2 = ;
	//int	test3 = ;
	//int	test4 = ;
	//int	test5 = ;

	// Function Call
	test_itoa(test1);
	//test_itoa(test2);
	//test_itoa(test3);
	//test_itoa(test4);
	//test_itoa(test5);
	return(0);
}