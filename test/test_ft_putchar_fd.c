#include "unity.h"
#include "libft.h"
#include <fcntl.h>
#include <unistd.h>
#include "test.h"

void test_ft_putchar_fd_basic(void) {
    int fd = open("test_putchar_fd.txt", O_RDWR | O_CREAT);
    ft_putchar_fd('A', fd);
    lseek(fd, 0, SEEK_SET);
    char c;
    read(fd, &c, 1);
    close(fd);
    TEST_ASSERT_EQUAL_CHAR('A', c);
    remove("test_putchar_fd.txt");
}
