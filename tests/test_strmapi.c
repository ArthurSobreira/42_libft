#include "includes/tests.h"

char    test_iter(unsigned int index, char input) 
{
    return (input += index);
}

char    test_iter_decrement(unsigned int index, char input) 
{
    return (input -= index);
}

char    test_iter_set_A(unsigned int index, char input) 
{
	(void)index;
    (void)input;
    return ('A');
}

void test_strmapi(char const *input, char (*function)(unsigned int, char), char *expec_result)
{
	// Arrange
	char	*act_result;

    // Act
    act_result = ft_strmapi(input, function);

    // Assert    
    if (strcmp(act_result, expec_result) == 0)
    {
        printf("\033[32m[Success]\033[0m Expected: '%s'  Result: '%s'\n", expec_result, input);
    }
    else
    {
        printf("\033[31m[Failure]\033[0m Expected: '%s'  Result: '%s'\n", expec_result, input);
    }
}

int main(void)
{
    // Test 01
    char	test1_str[] = "00000";
    char	*test1_ex_result = "01234";

	// Test 02
    char	test2_str[] = "abcde";
    char	*test2_ex_result = "acegi";

    // Test 03
    char	test3_str[] = "Hello";
    char	*test3_ex_result = "AAAAA";

    // Test 04
    char test4_str[] = "ABCDE";
    char *test4_ex_result = "AAAAA";

	// Test 05
    char test5_str[] = " ";
    char *test5_ex_result = " ";

    // Function Call
    test_strmapi(test1_str, test_iter, test1_ex_result);
	test_strmapi(test2_str, test_iter, test2_ex_result);
	test_strmapi(test3_str, test_iter_set_A, test3_ex_result);
	test_strmapi(test4_str, test_iter_decrement, test4_ex_result);
	test_strmapi(test5_str, test_iter, test5_ex_result);
    return (0);
}