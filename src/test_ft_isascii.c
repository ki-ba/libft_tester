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
#include <ctype.h>

void test_ft_isascii(void) {
    for (int i = 0; i <= UCHAR_MAX; i++) {
        TEST_ASSERT_EQUAL(isascii(i) != 0, ft_isascii(i) != 0);
    }
}
