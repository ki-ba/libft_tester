#include "unity.h"
#include "libft.h"
#include <string.h>
#include "test.h"

void test_ft_memcmp_basic(void) {
    char s1[50] = "Hello, world!";
    char s2[50] = "Hello, world!";
    TEST_ASSERT_EQUAL_INT(memcmp(s1, s2, 13), ft_memcmp(s1, s2, 13));
}

void test_ft_memcmp_equal(void) {
    char s1[50] = "Hello, world!";
    char s2[50] = "Hello, world!";
    TEST_ASSERT_EQUAL_INT(memcmp(s1, s2, 13), ft_memcmp(s1, s2, 13));
}

void test_ft_memcmp_not_equal(void) {
    char s1[50] = "Hello, world!";
    char s2[50] = "Hello, World!";
    TEST_ASSERT_EQUAL_INT(memcmp(s1, s2, 13), ft_memcmp(s1, s2, 13));
}

void test_ft_memcmp_zero_length(void) {
    char s1[50] = "Hello, world!";
    char s2[50] = "Hello, world!";
    TEST_ASSERT_EQUAL_INT(memcmp(s1, s2, 0), ft_memcmp(s1, s2, 0));
}
