/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 19:07:51 by kbarru            #+#    #+#             */
/*   Updated: 2024/11/24 19:07:52 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_toupper_basic(void) {
    TEST_ASSERT_EQUAL_INT('A', ft_toupper('a'));
    TEST_ASSERT_EQUAL_INT('Z', ft_toupper('z'));
    TEST_ASSERT_EQUAL_INT('A', ft_toupper('A'));
    TEST_ASSERT_EQUAL_INT('Z', ft_toupper('Z'));
    TEST_ASSERT_EQUAL_INT('1', ft_toupper('1'));
    TEST_ASSERT_EQUAL_INT(' ', ft_toupper(' '));
}

void test_ft_toupper_extended(void) {
    for (int i = 'a'; i <= 'z'; i++) {
        TEST_ASSERT_EQUAL_INT(i - 32, ft_toupper(i));
    }
    for (int i = 'A'; i <= 'Z'; i++) {
        TEST_ASSERT_EQUAL_INT(i, ft_toupper(i));
    }
}
