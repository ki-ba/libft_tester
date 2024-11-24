/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 19:07:39 by kbarru            #+#    #+#             */
/*   Updated: 2024/11/24 19:07:40 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void my_iteri_func(unsigned int i, char *c) {
    *c += i;
}

void test_ft_striteri_basic(void) {
    char s[] = "abc";
    ft_striteri(s, my_iteri_func);
    TEST_ASSERT_EQUAL_STRING("ace", s);
}

void test_ft_striteri_empty_string(void) {
    char s[] = "";
    ft_striteri(s, my_iteri_func);
    TEST_ASSERT_EQUAL_STRING("", s);
}
