#include "includes/tests.h"

/* void	test_substr(char const *s1, char const *s2, char *expec_result)
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
} */

int	main(void)
{
    // Test 01
    char	*test1_s = "1teste1";
	size_t	test1_start = 1;
    size_t	test1_len = 5;

    // Function Call
    char	*sla = ft_substr(test1_s, test1_start, test1_len);
	printf("%s\n", sla);
    return (0);
}
