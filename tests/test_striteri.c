#include "includes/tests.h"

void test_iter(unsigned int index, char *input) 
{
    *input += index;
}

void test_iter_decrement(unsigned int index, char *input) 
{
    *input -= index;
}

void test_iter_set_A(unsigned int index, char *input) 
{
	(void)index;
    *input = 'A';
}

void test_striteri(char *input, void (*function)(unsigned int, char*), char *expec_result)
{
    // Act
    ft_striteri(input, function);

    // Assert    
    if (strcmp(input, expec_result) == 0)
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
    test_striteri(test1_str, test_iter, test1_ex_result);
	test_striteri(test2_str, test_iter, test2_ex_result);
	test_striteri(test3_str, test_iter_set_A, test3_ex_result);
	test_striteri(test4_str, test_iter_decrement, test4_ex_result);
	test_striteri(test5_str, test_iter, test5_ex_result);
    return (0);
}