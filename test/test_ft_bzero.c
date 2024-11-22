#include "unity.h"
#include "libft.h"
#include <strings.h>
#include "test.h"

void test_ft_bzero_basic(void) {
    char s[50] = "Hello, world!";
    char s2[50] = "Hello, world!";
    ft_bzero(s, 5);
    bzero(s2, 5);
    TEST_ASSERT_EQUAL_MEMORY(s2, s, 50);
}

void test_ft_bzero_zero_length(void) {
    char s[50] = "Hello, world!";
    char s2[50] = "Hello, world!";
    ft_bzero(s, (0));
    bzero(s2, (0));
    TEST_ASSERT_EQUAL_MEMORY(s2, s, 50);
}

void test_ft_bzero_full_length(void) {
    char s[50] = "Hello, world!";
    char s2[50] = "Hello, world!";
    ft_bzero(s, 13);
    bzero(s2, 13);
    TEST_ASSERT_EQUAL_MEMORY(s2, s, 50);
}

void test_ft_bzero_partial_length(void) {
    char s[50] = "Hello, world!";
    char s2[50] = "Hello, world!";
    ft_bzero(s, 7);
    bzero(s2, 7);
    TEST_ASSERT_EQUAL_MEMORY(s2, s, 50);
}
