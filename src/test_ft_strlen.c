/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 19:07:46 by kbarru            #+#    #+#             */
/*   Updated: 2024/11/24 19:07:48 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ft_strlen_basic(void) {
    TEST_ASSERT_EQUAL_INT(strlen("Hello"), ft_strlen("Hello"));
}

void test_ft_strlen_empty_string(void) {
    TEST_ASSERT_EQUAL_INT(strlen(""), ft_strlen(""));
}
