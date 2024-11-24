/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:39:11 by kbarru            #+#    #+#             */
/*   Updated: 2024/11/24 20:41:13 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_isascii_basic(void) {
    TEST_ASSERT_TRUE(ft_isascii(65));  // 'A'
    TEST_ASSERT_TRUE(ft_isascii(48));  // '0'
    TEST_ASSERT_TRUE(ft_isascii(32));  // ' '
    TEST_ASSERT_TRUE(ft_isascii(127)); // DEL
    TEST_ASSERT_FALSE(ft_isascii(128));
    TEST_ASSERT_FALSE(ft_isascii(-1));
}

void test_ft_isascii_extended(void) {
    for (int i = 0; i < 128; i++) {
        TEST_ASSERT_TRUE(ft_isascii(i));
    }
    for (int i = 128; i < 256; i++) {
        TEST_ASSERT_FALSE(ft_isascii(i));
    }
}