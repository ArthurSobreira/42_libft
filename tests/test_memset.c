#include "includes/tests.h"

void	test_memset(void *input, int c, size_t n)
{
	// Arrange
	size_t			index;
	unsigned char 	*ptr;
	int				all_z;

	// Act
	ft_memset(input, c, n);
	index = 0;
	all_z = 1;
	ptr = (unsigned char *)input;
	
	// Assert
	while (index < n)
	{
		if (ptr[index] != c)
		{
			all_z = 0;
			break;
		}
		index++;
	}
	if (all_z)
	{
		printf("\033[32m[Success]\033[0m All bytes in range [0, %ld] are set to '%c'\n", n, c);
	}
	else
	{
		printf("\033[31m[Failure]\033[0m Not all bytes in range [0, %ld] were set to '%c'\n", n, c);
	}
}

int	main(void)
{
	// Test 01
	char	test1_input[] = "Hello, World!";
	int		test1_c = 'k';
	size_t	test1_n = 6;

	// Test 02
    int 	test2_input[] = {1, 2, 3, 4};
	int		test2_c = '0';
    size_t	test2_n = sizeof(test2_input);

	// Test 03
    int 	test3_input[] = {1, 2, 3, 4, 5};
	int		test3_c = ' ';
    size_t 	test3_n = 12;

	// Test 04
	char	test4_input[] = "abcdef";
	int		test4_c = 'b';
	size_t	test4_n = 2;

	// Test 05
    int 	test5_input[] = {};
	int		test5_c = 'x';
    size_t 	test5_n = 0;

	// Function Call
	test_memset(test1_input, test1_c, test1_n);
	test_memset(test2_input, test2_c, test2_n);
	test_memset(test3_input, test3_c, test3_n);
	test_memset(test4_input, test4_c, test4_n);
	test_memset(test5_input, test5_c, test5_n);
	return(0);
}