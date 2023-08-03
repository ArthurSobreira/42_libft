#include "includes/tests.h"

void	test_strtrim(char const *input, char const *set, char *expec_result)
{
	// Arrange
	char	*act_result;

	// Act
	act_result = ft_strtrim(input, set);

	// Assert
	if (strcmp(act_result, expec_result) == 0)
	{
		printf("\033[32m[Success]\033[0m Expected: '%s'  Result: '%s'\n", expec_result, act_result);
	}
	else
	{
		printf("\033[31m[Failure]\033[0m Expected: '%s'  Result: '%s'\n", expec_result, act_result);
	}
	free(act_result);
}

int	main(void)
{
    // Test 01
    char	*test1_input = "1test123";
	char	*test1_set = "123";
    char	*test1_ex_result = "test";

	// Test 02
    char	*test2_input = "   test123   ";
	char	*test2_set = " ";
    char	*test2_ex_result = "test123";

    // Test 03
    char	*test3_input = "Hello, World";
	char	*test3_set = "xyz";
    char	*test3_ex_result = "Hello, World";

    // Test 04
    char	*test4_input = "2teste123teste2";
	char	*test4_set = "123";
    char	*test4_ex_result = "teste123teste";

	// Test 05
    char	*test5_input = " ";
	char	*test5_set = " ";
    char	*test5_ex_result = "\0";

    // Function Call
    test_strtrim(test1_input, test1_set, test1_ex_result);
	test_strtrim(test2_input, test2_set, test2_ex_result);
	test_strtrim(test3_input, test3_set, test3_ex_result);
	test_strtrim(test4_input, test4_set, test4_ex_result);
	test_strtrim(test5_input, test5_set, test5_ex_result);
    return (0);
}
