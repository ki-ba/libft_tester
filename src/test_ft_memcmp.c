/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:22:36 by kbarru            #+#    #+#             */
/*   Updated: 2024/11/24 20:22:37 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

#define TEST_ASSERT_SAME_SIGN(a, b) \
    TEST_ASSERT_TRUE(((a) > 0 && (b) > 0) || ((a) < 0 && (b) < 0) || ((a) == 0 && (b) == 0))

void test_ft_memcmp_basic(void) {
    char s1[50] = "Hello, world!";
    char s2[50] = "Hello, world!";
    TEST_ASSERT_SAME_SIGN(memcmp(s1, s2, 13), ft_memcmp(s1, s2, 13));
}

void test_ft_memcmp_equal(void) {
    char s1[50] = "Hello, world!";
    char s2[50] = "Hello, world!";
    TEST_ASSERT_SAME_SIGN(memcmp(s1, s2, 13), ft_memcmp(s1, s2, 13));
}

void test_ft_memcmp_not_equal(void) {
    char s1[50] = "Hello, world!";
    char s2[50] = "Hello, World!";
    TEST_ASSERT_SAME_SIGN(memcmp(s1, s2, 13), ft_memcmp(s1, s2, 13));

}

void test_ft_memcmp_zero_length(void) {
    char s1[50] = "Hello, world!";
    char s2[50] = "Hello, world!";
    TEST_ASSERT_SAME_SIGN(memcmp(s1, s2, 0), ft_memcmp(s1, s2, 0));
}
