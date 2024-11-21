#include "unity.h"
#include "../libft.h"

void test_ft_memmove_basic(void) {
    char dest[50] = "Hello, world!";
    ft_memmove(dest + 7, dest, 5);
    TEST_ASSERT_EQUAL_STRING("Hello, Hello!", dest);
}

void test_ft_memmove_overlap(void) {
    char dest[50] = "Hello, world!";
    ft_memmove(dest + 7, dest, 7);
    TEST_ASSERT_EQUAL_STRING("Hello, Hello, ", dest);
}

void test_ft_memmove_no_overlap(void) {
    char dest[50] = "Hello, world!";
    char src[50] = "Goodbye!";
    ft_memmove(dest, src, 8);
    TEST_ASSERT_EQUAL_STRING("Goodbye!orld!", dest);
}

void test_ft_memmove_zero_length(void) {
    char dest[50] = "Hello, world!";
    char src[50] = "Goodbye!";
    ft_memmove(dest, src, 0);
    TEST_ASSERT_EQUAL_STRING("Hello, world!", dest);
}
