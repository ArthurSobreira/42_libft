#include "includes/tests.h"

int test_putstr_fd(char *s)
{
	// Arrange
	char buff[4096];
	int file_desc;
	int byte_nb;

	// Act
	file_desc = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putstr_fd(s, file_desc); // Writing on the file

	// Close the file after writing
	close(file_desc);

	// Reopen the file for reading
	file_desc = open("test.txt", O_RDONLY);

	// Assert
	byte_nb = read(file_desc, buff, sizeof(buff));
	if (byte_nb == -1)
	{
		perror("Error reading from the file");
		return (1);
	}
	else
	{
		buff[byte_nb] = '\0';
		if (strcmp(s, buff) == 0)
		{
			printf("\033[32m[Success]\033[0m The string '%s' was written to the file\n", s);
		}
		else
		{
			printf("\033[31m[Failure]\033[0m Could not populate the file with the string '%s'\n", s);
		}
	}

	// Close the file after reading
	close(file_desc);
	return (0);
}

int main(void)
{
	// Function Call
	test_putstr_fd("test123");
	test_putstr_fd("Hello, World");
	test_putstr_fd("  123  ");
	test_putstr_fd("~]*-");
	test_putstr_fd("\0");
	return (0);
}