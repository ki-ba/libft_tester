#include "unity.h"
#include "libft.h"
#include "test.h"
#include <limits.h>
#include <ctype.h>

void test_ft_isalnum(void) {
    for (int i = 0; i <= UCHAR_MAX; i++) {
        TEST_ASSERT_EQUAL(isalnum(i) != 0, ft_isalnum(i) != 0);
    }
}
