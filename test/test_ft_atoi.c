#include "unity.h"
#include <stdlib.h>

extern int ft_atoi(const char *str);

void test_ft_atoi_with_positive_numbers(void) {
    TEST_ASSERT_EQUAL(atoi("123"), ft_atoi("123"));
    TEST_ASSERT_EQUAL(atoi("42"), ft_atoi("42"));
}

void test_ft_atoi_with_negative_numbers(void) {
    TEST_ASSERT_EQUAL(atoi("-123"), ft_atoi("-123"));
    TEST_ASSERT_EQUAL(atoi("-42"), ft_atoi("-42"));
}

void test_ft_atoi_with_zero(void) {
    TEST_ASSERT_EQUAL(atoi("0"), ft_atoi("0"));
}

void test_ft_atoi_with_non_numeric_characters(void) {
    TEST_ASSERT_EQUAL(atoi("123abc"), ft_atoi("123abc"));
    TEST_ASSERT_EQUAL(atoi("-123abc"), ft_atoi("-123abc"));
}

void test_ft_atoi_with_empty_string(void) {
    TEST_ASSERT_EQUAL(atoi(""), ft_atoi(""));
}

void test_ft_atoi_with_spaces(void) {
    TEST_ASSERT_EQUAL(atoi(" 123"), ft_atoi(" 123"));
    TEST_ASSERT_EQUAL(atoi("123 "), ft_atoi("123 "));
    TEST_ASSERT_EQUAL(atoi(" 123 "), ft_atoi(" 123 "));
    TEST_ASSERT_EQUAL(atoi("  123  "), ft_atoi("  123  "));
}