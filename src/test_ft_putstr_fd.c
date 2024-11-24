#include "unity.h"
#include "libft.h"
#include <fcntl.h>
#include <unistd.h>
#include "test.h"

void test_ft_putstr_fd_basic(void) {
    int fd = open("test_putstr_fd.txt", O_RDWR | O_CREAT);
    ft_putstr_fd("Hello", fd);
    lseek(fd, 0, SEEK_SET);
    char buffer[6] = {0};
    read(fd, buffer, 5);
    close(fd);
    TEST_ASSERT_EQUAL_STRING("Hello", buffer);
    remove("test_putstr_fd.txt");
}

void test_ft_putstr_fd_empty_string(void) {
    int fd = open("test_putstr_fd.txt", O_RDWR | O_CREAT);
    ft_putstr_fd("", fd);
    lseek(fd, 0, SEEK_SET);
    char buffer[1] = {0};
    read(fd, buffer, 0);
    close(fd);
    TEST_ASSERT_EQUAL_STRING("", buffer);
    remove("test_putstr_fd.txt");
}
