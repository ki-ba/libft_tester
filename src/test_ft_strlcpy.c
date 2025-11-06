/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 19:09:52 by kbarru            #+#    #+#             */
/*   Updated: 2024/11/24 19:09:54 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_strlcpy_basic(void) {
    char dest[10];
    char dest2[10];
    const char *src = "Hello";
    size_t result = ft_strlcpy(dest, src, sizeof(dest));
    size_t result2 = strlcpy(dest2, src, sizeof(dest2));
    TEST_ASSERT_EQUAL_STRING(dest2, dest);
    TEST_ASSERT_EQUAL_UINT(result2, result);
}

void test_ft_strlcpy_truncate(void) {
    char dest[5];
    char dest2[5];
    const char *src = "Hello, World!";
    size_t result = ft_strlcpy(dest, src, sizeof(dest));
    size_t result2 = strlcpy(dest2, src, sizeof(dest2));
    TEST_ASSERT_EQUAL_STRING(dest2, dest);
    TEST_ASSERT_EQUAL_UINT(result2, result);
}

void test_ft_strlcpy_zero_length(void) {
    char dest[10] = "Initial";
    char dest2[10] = "Initial";
    const char *src = "Hello";
    size_t result = ft_strlcpy(dest, src, 0);
    size_t result2 = strlcpy(dest2, src, 0);
    TEST_ASSERT_EQUAL_STRING(dest2, dest);
    TEST_ASSERT_EQUAL_UINT(result2, result);
}

void test_ft_strlcpy_null_src(void)
{
    struct { char *dest; char *src; size_t len; size_t (*f)(char *, const char *, size_t); } ctx1 = { "", NULL, 10, ft_strlcpy };
    struct { char *dest; char *src; size_t len; size_t (*f)(char *, const char *, size_t); } ctx2 = { "", NULL, 10, strlcpy };
    test_signal_equivalence(adapter_strlcpy, &ctx1, adapter_strlcpy, &ctx2);
}

void test_ft_strlcpy_null_dest(void)
{
    struct { char *dest; char *src; size_t len; size_t (*f)(char *, const char *, size_t); } ctx1 = { NULL, "Hello", 10, ft_strlcpy };
    struct { char *dest; char *src; size_t len; size_t (*f)(char *, const char *, size_t); } ctx2 = { NULL, "Hello", 10, strlcpy };
    test_signal_equivalence(adapter_strlcpy, &ctx1, adapter_strlcpy, &ctx2);
}
