#include "includes/tests.h"

void	test_strjoin(char const *s1, char const *s2, char *expec_result)
{
	// Arrange
	char	*act_result;

	// Act
	act_result = ft_strjoin(s1, s2);

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
    char	*test1_s1 = "123";
	char	*test1_s2 = "456";
    char	*test1_ex_result = "123456";

	// Test 02
    char	*test2_s1 = "";
	char	*test2_s2 = "1234";
    char	*test2_ex_result = "1234";

    // Test 03
    char	*test3_s1 = "teste";
	char	*test3_s2 = "";
    char	*test3_ex_result = "teste";

    // Test 04
    char	*test4_s1 = "teste123";
	char	*test4_s2 = "\0";
    char	*test4_ex_result = "teste123";

	// Test 05
    char	*test5_s1 = "";
	char	*test5_s2 = " ";
    char	*test5_ex_result = " ";

    // Function Call
    test_strjoin(test1_s1, test1_s2, test1_ex_result);
	test_strjoin(test2_s1, test2_s2, test2_ex_result);
	test_strjoin(test3_s1, test3_s2, test3_ex_result);
	test_strjoin(test4_s1, test4_s2, test4_ex_result);
	test_strjoin(test5_s1, test5_s2, test5_ex_result);
    return (0);
}
