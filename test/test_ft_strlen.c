#include "unity.h"
#include "../libft.h"
#include <string.h>

void test_ft_strlen_basic(void) {
    TEST_ASSERT_EQUAL_INT(strlen("Hello"), ft_strlen("Hello"));
}

void test_ft_strlen_empty_string(void) {
    TEST_ASSERT_EQUAL_INT(strlen(""), ft_strlen(""));
}
