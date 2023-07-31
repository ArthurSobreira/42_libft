#include "includes/tests.h"

int	test_putnbr_fd(int c)
{
	// Arrange
    char	buff[4096];
    int		file_desc;
    int		byte_nb;

    // Act
    file_desc = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    ft_putnbr_fd(c, file_desc);  // Writing on the file

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
    else if (c == atoi(buff))
    {
        printf("\033[32m[Success]\033[0m The number %d was written to the file\n", c);
    }
    else
    {
        printf("\033[31m[Failure]\033[0m Could not populate the file with the number %d\n", c);
    }

    // Close the file after reading
    close(file_desc);
    return (0);
}

int	main(void)
{	
    // Function Call
    test_putnbr_fd(1);
    test_putnbr_fd(9);
	test_putnbr_fd(1234);
	test_putnbr_fd(2147483647);
	test_putnbr_fd(-2147483648);
	return (0);
}