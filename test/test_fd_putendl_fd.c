#include "unity.h"
#include "../libft.h"
#include <fcntl.h>
#include <unistd.h>

void test_ft_putendl_fd_basic(void) {
    int fd = open("test_putendl_fd.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
    ft_putendl_fd("Hello", fd);
    lseek(fd, 0, SEEK_SET);
    char buffer[7] = {0};
    read(fd, buffer, 6);
    close(fd);
    TEST_ASSERT_EQUAL_STRING("Hello\n", buffer);
    remove("test_putendl_fd.txt");
}

void test_ft_putendl_fd_empty_string(void) {
    int fd = open("test_putendl_fd.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
    ft_putendl_fd("", fd);
    lseek(fd, 0, SEEK_SET);
    char buffer[2] = {0};
    read(fd, buffer, 1);
    close(fd);
    TEST_ASSERT_EQUAL_STRING("\n", buffer);
    remove("test_putendl_fd.txt");
}
