NAME = run_tests
CC = cc
FLAGS = -Wall -Wextra -Werror
TESTDIR = test/

LIBDIR = ../libft/
LIB = $(LIBDIR)libft.a

TESTNSRC = test_fd_putendl_fd.c  test_fd_putstr_fd.c  test_ft_atoi.c \
test_ft_bzero.c  test_ft_calloc.c  test_ft_isalnum.c  test_ft_isalpha.c \
test_ft_isdigit.c  test_ft_isprint.c  test_ft_memcmp.c  test_ft_memcpy.c \
test_ft_memmove.c  test_ft_memset.c  test_ft_putchar_fd.c  test_ft_split.c \
test_ft_strlcat.c  test_ft_strlcpy.c  test_ft_strlen.c  test_ft_strnstr.c \
test_main.c  test_strtrim.c  ft_test_toupper.c  ft_test_tolower.c \
ft_test_strrchr.c  ft_test_strmapi.c  ft_test_strjoin.c  ft_test_striteri.c \
ft_test_strdup.c  ft_test_strncmp.c  ft_test_strchr.c ft_test_lst.c

.PHONY: all clean fclean re all lib

SRC = $(addprefix $(TESTDIR), $(TESTNSRC))

OBJ = $(SRC:.c=.o)

# --- RULES ---

$(NAME): $(OBJ) $(LIB) Makefile
	@echo "Compiling test files..."
	$(CC) -g -o $@ $(OBJ) unity/src/unity.c -I unity/src -I $(LIBDIR) -L $(LIBDIR) -lft
	@echo "Done."

%.o: %.c
	$(CC) -g -I $(LIBDIR) -I unity/src -c $< -o $@

$(LIB):
	@echo "Compiling libft..."
	@make -C $(LIBDIR) all bonus
	@echo "Done."

clean:
	@echo "Cleaning object files..."
	@rm -f $(OBJ)
	@echo "Done."

fclean: clean
	@echo "Cleaning executable..."
	@rm -f $(NAME)
	@echo "Done."

re: fclean all
