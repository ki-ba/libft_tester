/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:08:29 by kbarru            #+#    #+#             */
/*   Updated: 2024/11/24 20:21:56 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_memchr_basic(void) {
    char str[] = "Hello, World!";
    TEST_ASSERT_EQUAL_PTR(memchr(str, 'W', 13), ft_memchr(str, 'W', 13));
}

void test_ft_memchr_not_found(void) {
    char str[] = "Hello, World!";
    TEST_ASSERT_EQUAL_PTR(memchr(str, 'x', 13), ft_memchr(str, 'x', 13));
}

void test_ft_memchr_empty_string(void) {
    char str[] = "";
    TEST_ASSERT_EQUAL_PTR(memchr(str, 'a', 1), ft_memchr(str, 'a', 1));
}