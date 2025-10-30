#include "unity.h"
#include "libft.h"
#include "test.h"
#include <ctype.h>

void test_ft_isprint_extended(void) {
    for (int i = 0; i < 256; i++)
        TEST_ASSERT_EQUAL(ft_isprint(i), isprint(i));
}
