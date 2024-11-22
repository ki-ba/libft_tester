NAME = run_tests
CC = cc
FLAGS = -Wall -Wextra -Werror -g
SRCDIR = libft/
TESTDIR = test/

LIBDIR = libft/
LIB = $(LIBDIR)libft.a

NSRC = ft_atoi.c   ft_calloc.c   ft_isalpha.c  ft_isdigit.c  ft_itoa.c \
ft_lstadd_front_bonus.c  ft_lstdelone_bonus.c  ft_lstlast_bonus.c \
ft_lstnew_bonus.c   ft_memchr.c  ft_memcpy.c   ft_memset.c \
ft_putendl_fd.c  ft_putstr_fd.c  ft_strchr.c  ft_striteri.c \
ft_strlcat.c  ft_strlen.c   ft_strncmp.c  ft_strrchr.c  ft_substr.c \
ft_toupper.c ft_bzero.c  ft_isalnum.c  ft_isascii.c  ft_isprint.c \
ft_lstadd_back_bonus.c  ft_lstclear_bonus.c      ft_lstiter_bonus.c \
ft_lstmap_bonus.c   ft_lstsize_bonus.c  ft_memcmp.c  ft_memmove.c \
ft_putchar_fd.c  ft_putnbr_fd.c   ft_split.c      ft_strdup.c \
ft_strjoin.c   ft_strlcpy.c  ft_strmapi.c  ft_strnstr.c  ft_strtrim.c \
ft_tolower.c  lst_test.c \

TESTNSRC = test_fd_putendl_fd.c  test_fd_putstr_fd.c  test_ft_atoi.c \
test_ft_bzero.c  test_ft_calloc.c  test_ft_isalnum.c  test_ft_isalpha.c \
test_ft_isdigit.c  test_ft_isprint.c  test_ft_memcmp.c  test_ft_memcpy.c \
test_ft_memmove.c  test_ft_memset.c  test_ft_putchar_fd.c  test_ft_split.c \
test_ft_strlcat.c  test_ft_strlcpy.c  test_ft_strlen.c  test_ft_strnstr.c \
test_main.c  test_strtrim.c \

.PHONY = all clean fclean re all lib

TESTSRC = $(addprefix $(TESTDIR), $(TESTNSRC))

SRC = $(addprefix $(SRCDIR), $(NSRC))

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(LIB):
	@echo "Compiling libft..."
	make -C libft all bonus
	@echo "Done."

$(NAME): $(OBJ) $(LIB)
	@echo "Compiling test files..."
	$(CC) $(FLAGS)  -o $(NAME) $(TESTSRC) unity/src/unity.c -I unity/src -I $(SRCDIR) -I $(TESTDIR) -I $(LIBDIR)  -Llibft -lft -lbsd
	@echo "Done."

clean:
	@echo "Cleaning object files..."
	rm -f $(OBJ)
	@echo "Done."

fclean: clean
	@echo "Cleaning executable..."
	rm -f $(NAME)
	@echo "Done."

re: fclean all
