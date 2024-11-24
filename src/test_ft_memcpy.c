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
