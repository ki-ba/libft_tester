/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:22:42 by kbarru            #+#    #+#             */
/*   Updated: 2024/11/24 20:22:45 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_memmove_basic(void) {
    char dest[50] = "Hello, world!";
    ft_memmove(dest + 7, dest, 5);
    TEST_ASSERT_EQUAL_STRING("Hello, Hello!", dest);
}

void test_ft_memmove_overlap(void) {
    char dest[50] = "Hello, world!";
    ft_memmove(dest + 7, dest, 7);
    TEST_ASSERT_EQUAL_STRING("Hello, Hello, ", dest);
}

void test_ft_memmove_no_overlap(void) {
    char dest[50] = "Hello, world!";
    char src[50] = "Goodbye!";
    ft_memmove(dest, src, 8);
    TEST_ASSERT_EQUAL_STRING("Goodbye!orld!", dest);
}

void test_ft_memmove_zero_length(void) {
    char dest[50] = "Hello, world!";
    char src[50] = "Goodbye!";
    ft_memmove(dest, src, 0);
    TEST_ASSERT_EQUAL_STRING("Hello, world!", dest);
}
