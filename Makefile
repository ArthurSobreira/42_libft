NAME = libft.a
CFLAGS = -Wall -Wextra -Werror

# Path Definition
HEADER_PATH = ./
BIN_PATH = ./bin/
TESTS_PATH = ./tests/

# Colors Definition 
GREEN = "\033[32m"
RED = "\033[31m"
CYAN = "\033[35m"
YELLOW = "\033[33m"
COLOR_LIMITER = "\033[0m"

SOURCES = \
	ft_atoi.c \
	ft_bzero.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_strdup.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_tolower.c \
	ft_toupper.c \

OBJECTS = $(addprefix $(BIN_PATH), $(SOURCES:%.c=%.o))

all: $(BIN_PATH) $(NAME)

$(BIN_PATH)%.o: %.c
	@echo $(GREEN)[Compiling]$(COLOR_LIMITER) $(YELLOW)$(<)...$(COLOR_LIMITER)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER_PATH)

$(NAME): $(OBJECTS)
	@echo $(CYAN)[Generating $(NAME)]$(COLOR_LIMITER)
	ar rcs $(NAME) $?

$(BIN_PATH):
	@mkdir -p $(BIN_PATH)

clean:
	@rm -rf $(BIN_PATH)
	@echo $(RED)[Removing Objects...]$(COLOR_LIMITER)

fclean: clean
	@rm -f $(NAME)
	@rm -f libft_test
	@echo $(RED)[Removing $(NAME)...]$(COLOR_LIMITER)

re: fclean all

.PHONY: all clean fclean re

# Run tests
TESTS = $(patsubst ft_%.c,%,$(SOURCES))

$(TESTS): %: $(NAME)
	@echo $(YELLOW)[ ===== Testing ft_$* ===== ]$(COLOR_LIMITER)	
	@$(CC) $(CFLAGS) $(TESTS_PATH)test_$*.c $(NAME) -o libft_test && ./libft_test

run_tests: $(TESTS)
	@echo $(YELLOW)[ ======== End of Tests ======== ]$(COLOR_LIMITER)