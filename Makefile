NAME = libft.a
CFLAGS = -Wall -Wextra -Werror

# Path Definition
SOURCES_PATH = ./src/
HEADER_PATH = ./include/
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
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \

BONUS_SOURCES = \
	ft_lstadd_back_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstmap_bonus.c \
	ft_lstnew_bonus.c \
	ft_lstsize_bonus.c \

OBJECTS = $(addprefix $(BIN_PATH), $(SOURCES:%.c=%.o))
BONUS_OBJECTS = $(addprefix $(BIN_PATH), $(BONUS_SOURCES:%.c=%.o))

all: $(BIN_PATH) $(NAME)

$(BIN_PATH)%.o: $(SOURCES_PATH)%.c
	@echo $(GREEN)[Compiling]$(COLOR_LIMITER) $(YELLOW)$(<)...$(COLOR_LIMITER)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER_PATH)

$(NAME): $(OBJECTS)
	@echo $(CYAN)[Generating $(NAME)]$(COLOR_LIMITER)
	ar rcs $(NAME) $?

$(BIN_PATH):
	@mkdir -p $(BIN_PATH)

bonus:
	@make OBJECTS="$(BONUS_OBJECTS)" --no-print-directory

clean:
	@echo $(RED)[Removing Objects...]$(COLOR_LIMITER)
	@rm -rf $(BIN_PATH)

fclean: clean
	@echo $(RED)[Removing $(NAME)...]$(COLOR_LIMITER)
	@rm -f $(NAME)
	@rm -f libft_test

re: fclean all

.PHONY: all clean fclean re bonus

# Run Tests
TESTS = $(patsubst ft_%.c,%,$(SOURCES))

$(TESTS): all
	@echo $(YELLOW)[ ===== Testing ft_$@ ===== ]$(COLOR_LIMITER)
	@$(CC) $(CFLAGS) -lbsd $(TESTS_PATH)test_$@.c $(NAME) -o libft_test && ./libft_test
