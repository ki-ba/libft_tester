#include "unity.h"
#include "libft.h"
#include <stdlib.h>
#include "test.h"

void test_ft_calloc_basic(void) {
    int *arr = ft_calloc(5, sizeof(int));
    int *arr_std = calloc(5, sizeof(int));
    TEST_ASSERT_EQUAL(arr != 0, arr_std != 0);
    TEST_ASSERT_EQUAL_MEMORY(arr_std, arr, 5 * sizeof(int));
    free(arr);
    free(arr_std);
}

void test_ft_calloc_zero_elements(void) {
    size_t nmemb = 0;
    int *arr = ft_calloc(nmemb, sizeof(int));
    int *arr_std = calloc(nmemb, sizeof(int));
    TEST_ASSERT_EQUAL(arr != 0, arr_std != 0);
    free(arr);
    free(arr_std);
}

void test_ft_calloc_zero_size(void) {
    int *arr = ft_calloc(5, 0);
    int *arr_std = calloc(5, 0);
    TEST_ASSERT_EQUAL(arr != 0, arr_std != 0);
    free(arr);
    free(arr_std);
}
