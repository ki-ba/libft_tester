SHELL := /bin/bash
NAME = run_tests
CC = cc
FLAGS = -Wall -Wextra -Werror


UNAME := $(shell uname -s)
ifeq ($(UNAME), Linux)
LINUX_FLAGS= -lbsd
endif

# ----- DIRECTORIES -----

SRCDIR = src/
OBJDIR = .obj/
LIBDIR = ../libft/

# ----- FILES -----
LIB = $(LIBDIR)libft.a

NSRC = test_ft_putendl_fd.c  test_ft_putstr_fd.c  test_ft_atoi.c \
test_ft_bzero.c  test_ft_calloc.c  test_ft_isalnum.c  test_ft_isalpha.c \
test_ft_isdigit.c  test_ft_isprint.c  test_ft_memcmp.c  test_ft_memcpy.c \
test_ft_memmove.c  test_ft_memset.c  test_ft_putchar_fd.c  test_ft_split.c \
test_ft_strlcat.c  test_ft_strlcpy.c  test_ft_strlen.c  test_ft_strnstr.c \
test_main.c  test_strtrim.c  test_ft_toupper.c  test_ft_tolower.c \
test_ft_strrchr.c  test_ft_strmapi.c  test_ft_strjoin.c  test_ft_striteri.c \
test_ft_strdup.c  test_ft_strncmp.c  test_ft_strchr.c test_ft_lst.c \
test_ft_memchr.c test_ft_substr.c test_ft_itoa.c test_ft_putnbr_fd.c \
test_ft_isascii.c

.PHONY: all clean fclean re all


SRC = $(addprefix $(SRCDIR), $(NSRC))

OBJ = $(addprefix $(OBJDIR), $(NSRC:.c=.o))

# --- RULES ---

$(NAME): $(OBJ) Makefile
	$(MAKE) $(LIB)
	@echo "Compiling test files..."
	$(CC) -o $@ $(OBJ) unity/src/unity.c -I unity/src -I $(LIBDIR) -L $(LIBDIR) -lft $(LINUX_FLAGS)
	@echo "Done."

$(OBJDIR)%.o: $(SRCDIR)%.c Makefile $(LIB) | $(OBJDIR)
	@$(CC) $(FLAGS) -I $(LIBDIR) -I unity/src -c $< -o $@

$(LIB):
	@echo "Compiling libft..."
	@make -C $(LIBDIR) all bonus
	@echo "Done."

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@echo "Cleaning object files..."
	rm -f $(OBJ)
	@rmdir $(OBJDIR)
	@echo "Done."

fclean: clean
	@echo "Cleaning executable..."
	@rm -f $(NAME)
	@echo "Done."

run : $(NAME)
	./$(NAME)

re: fclean
	$(MAKE) $(NAME)
