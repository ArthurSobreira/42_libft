#include "includes/tests.h"

int test_putchar_fd(char c)
{
    // Arrange
    char buff;
    int file_desc;
    int byte_nb;

    // Act
    file_desc = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    ft_putchar_fd(c, file_desc); // Writing on the file

    // Close the file after writing
    close(file_desc);

    // Reopen the file for reading
    file_desc = open("test.txt", O_RDONLY);

    // Assert
    byte_nb = read(file_desc, &buff, 1);
    if (byte_nb == -1)
    {
        perror("Error reading from the file");
        return (1);
    }
    else if (c == buff)
    {
        printf("\033[32m[Success]\033[0m The character '%c' was written to the file\n", c);
    }
    else
    {
        printf("\033[31m[Failure]\033[0m Could not populate the file with the char '%c'\n", c);
    }

    // Close the file after reading
    close(file_desc);
    return (0);
}

int main(void)
{
    // Function Call
    test_putchar_fd('A');
    test_putchar_fd('Z');
    test_putchar_fd('1');
    test_putchar_fd('9');
    test_putchar_fd('+');
    return (0);
}