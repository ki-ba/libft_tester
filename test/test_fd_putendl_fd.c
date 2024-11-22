#include "libft.h"
#include "unity.h"
#include <fcntl.h>
#include <unistd.h>
#include "test.h"

void	test_ft_putendl_fd_basic(void)
{
	int		fd;
	char	buffer[7] = {0};

	fd = open("test_putendl_fd.txt", O_RDWR | O_CREAT);
	ft_putendl_fd("Hello", fd);
	lseek(fd, 0, SEEK_SET);
	read(fd, buffer, 6);
	close(fd);
	TEST_ASSERT_EQUAL_STRING("Hello\n", buffer);
	remove("test_putendl_fd.txt");
}

void	test_ft_putendl_fd_empty_string(void)
{
	int		fd;
	char	buffer[2] = {0};

	fd = open("test_putendl_fd.txt", O_RDWR | O_CREAT);
	ft_putendl_fd("", fd);
	lseek(fd, 0, SEEK_SET);
	read(fd, buffer, 1);
	close(fd);
	TEST_ASSERT_EQUAL_STRING("\n", buffer);
	remove("test_putendl_fd.txt");
}
