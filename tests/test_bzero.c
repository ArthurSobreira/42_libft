#include "includes/tests.h"

void	test_bzero(void *input, size_t n)
{
	// Arrange
	size_t			index;
	unsigned char 	*ptr;
	int				all_z;

	// Act
	ft_bzero(input, n);
	index = 0;
	all_z = 1;
	ptr = (unsigned char *)input;
	
	// Assert
	while (index < n)
	{
		if (ptr[index] != '\0')
		{
			all_z = 0;
			break;
		}
		index++;
	}
	if (all_z)
	{
		printf("\033[32m[Success]\033[0m All bytes in range [0, %ld] are set to '\\0'\n", n);
	}
	else
	{
		printf("\033[31m[Failure]\033[0m Not all bytes in range [0, %ld] were set to '\\0'\n", n);
	}
}

int	main(void)
{
	// Test 01
	char	test1_input[] = "Hello, World!";
	size_t	test1_n = 5;

	// Test 02
    int test2_input[] = {1, 2, 3, 4};
    size_t test2_n = sizeof(test2_input);

	// Test 03
    int test3_input[] = {1, 2, 3, 4, 5};
    size_t test3_n = 12;

	// Test 04
	char	test4_input[] = "abcdef";
	size_t	test4_n = 1;

	// Test 05
    int test5_input[] = {};
    size_t test5_n = 0;

	// Function Call
	test_bzero(test1_input, test1_n);
	test_bzero(test2_input, test2_n);
	test_bzero(test3_input, test3_n);
	test_bzero(test4_input, test4_n);
	test_bzero(test5_input, test5_n);
	return(0);
}