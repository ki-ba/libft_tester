#include "unity.h"
#include "libft.h"
#include <string.h>
#include "test.h"

void test_ft_memcpy_basic(void) {
    char dest[50] = "Hello, world!";
    char dest2[50] = "Hello, world!";
    char src[50] = "Goodbye!";
    char src2[50] = "Goodbye!";
    ft_memcpy(dest, src, 8);
    memcpy(dest2, src2, 8);
    TEST_ASSERT_EQUAL_STRING(dest2, dest);
}

void test_ft_memcpy_overlap(void) {
    char dest[50] = "Hello, world!";
    char dest2[50] = "Hello, world!";
    ft_memcpy(dest + 7, dest, 5);
    memcpy(dest2 + 7, dest2, 5);
    TEST_ASSERT_EQUAL_STRING(dest2, dest);
}

void test_ft_memcpy_no_overlap(void) {
    char dest[50] = "Hello, world!";
    char dest2[50] = "Hello, world!";
    char src[50] = "Goodbye!";
    char src2[50] = "Goodbye!";
    ft_memcpy(dest, src, 8);
    memcpy(dest2, src2, 8);
    TEST_ASSERT_EQUAL_STRING(dest2, dest);
}

void test_ft_memcpy_zero_length(void) {
    char dest[50] = "Hello, world!";
    char dest2[50] = "Hello, world!";
    char src[50] = "Goodbye!";
    char src2[50] = "Goodbye!";
    ft_memcpy(dest, src, 0);
    memcpy(dest2, src2, 0);
    TEST_ASSERT_EQUAL_STRING(dest2, dest);
}

void test_ft_memcpy_random_data(void) {
    unsigned char dest[50];
    unsigned char dest2[50];

    int source_fd = open("/dev/urandom", O_RDONLY);
    unsigned char source[50];

    read(source_fd, source, 50);
    close(source_fd);


    memcpy(dest, &source, sizeof(source));
    ft_memcpy(dest2, &source, sizeof(source));

    TEST_ASSERT_EQUAL_MEMORY(dest2, dest, 50);
}
