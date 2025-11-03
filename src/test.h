/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:09:54 by kbarru            #+#    #+#             */
/*   Updated: 2024/11/24 20:41:05 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include "libft.h"
# include "unity.h"
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

#ifdef __APPLE__
# include <string.h>
#endif

#ifdef __linux__
# include <bsd/string.h>
#endif
void	test_ft_atoi_with_positive_numbers(void);
void	test_ft_atoi_with_negative_numbers(void);
void	test_ft_atoi_with_zero(void);
void	test_ft_atoi_with_non_numeric_characters(void);
void	test_ft_atoi_with_empty_string(void);
void	test_ft_atoi_with_spaces(void);

void	test_ft_strnstr_found(void);
void	test_ft_strnstr_not_found(void);
void	test_ft_strnstr_empty_little(void);
void	test_ft_strnstr_little_longer_than_big(void);
void	test_ft_strnstr_partial_match(void);
void	test_ft_strnstr_len_less_than_big(void);
void	test_ft_strnstr_null(void);
void	test_ft_strnstr_empty_big(void);
void	test_ft_strnstr_empty_little(void);

void	test_strtrim_basic(void);
void	test_strtrim_x(void);
void	test_strtrim_abc(void);
void	test_strtrim_42(void);
void	test_strtrim_no_trimming_needed(void);
void	test_strtrim_empty_string(void);
void	test_strtrim_spaces(void);
void	test_strtrim_special_characters(void);
void	test_strtrim_mixed_characters(void);
void	test_strtrim_only_set_characters(void);

void	test_ft_split_basic(void);
void	test_ft_split_empty_string(void);
void	test_ft_split_no_delimiters(void);
void	test_ft_split_only_delimiters(void);
void	test_ft_split_multiple_delimiters(void);

void	test_ft_memmove_basic(void);
void	test_ft_memmove_overlap(void);
void	test_ft_memmove_no_overlap(void);
void	test_ft_memmove_zero_length(void);
void	test_ft_memmove_random_data(void);

void	test_ft_memcpy_basic(void);
void	test_ft_memcpy_overlap(void);
void	test_ft_memcpy_no_overlap(void);
void	test_ft_memcpy_zero_length(void);
void	test_ft_memcpy_random_data(void);

void	test_ft_memcmp_basic(void);
void	test_ft_memcmp_equal(void);
void	test_ft_memcmp_not_equal(void);
void	test_ft_memcmp_zero_length(void);

void	test_ft_bzero_basic(void);
void	test_ft_bzero_zero_length(void);
void	test_ft_bzero_full_length(void);
void	test_ft_bzero_partial_length(void);

void	test_ft_memset_basic(void);
void	test_ft_memset_zero_length(void);
void	test_ft_memset_full_length(void);
void	test_ft_memset_partial_length(void);
void 	test_ft_memset_non_printable(void);

void	test_ft_strlen_basic(void);
void	test_ft_strlen_empty_string(void);
void 	test_ft_strlen_long_string(void);

void	test_ft_putchar_fd_basic(void);

void	test_ft_calloc_basic(void);
void	test_ft_calloc_zero_elements(void);
void	test_ft_calloc_zero_size(void);

void	test_ft_putstr_fd_basic(void);
void	test_ft_putstr_fd_empty_string(void);

void	test_ft_putendl_fd_basic(void);
void	test_ft_putendl_fd_empty_string(void);

void	test_ft_isprint(void);

void	test_ft_isdigit_basic(void);
void	test_ft_isdigit_extended(void);

void	test_ft_isalpha(void);

void	test_ft_isalnum(void);

void	test_ft_strlcpy_basic(void);
void	test_ft_strlcpy_truncate(void);
void	test_ft_strlcpy_zero_length(void);

void	test_ft_strlcat_basic(void);
void	test_ft_strlcat_truncate(void);
void	test_ft_strlcat_zero_length(void);

void	test_ft_toupper(void);

void	test_ft_tolower(void);

void	test_ft_strrchr_basic(void);
void	test_ft_strrchr_empty_string(void);

void	test_ft_strmapi_basic(void);
void	test_ft_strmapi_empty_string(void);

void	test_ft_strjoin_basic(void);
void	test_ft_strjoin_empty_strings(void);
void	test_ft_strjoin_one_empty_string(void);

void	test_ft_striteri_basic(void);
void	test_ft_striteri_empty_string(void);

void	test_ft_strdup_basic(void);
void	test_ft_strdup_empty_string(void);

void	test_ft_strncmp_basic(void);
void	test_ft_strncmp_empty_strings(void);

void	test_ft_strchr_basic(void);
void	test_ft_strchr_empty_string(void);

void    test_ft_lst_add_back(void);
void    test_ft_lst_add_front(void);
void    test_ft_lst_map(void);
void	test_ft_lstiter(void);

void    test_ft_memchr_basic(void);
void    test_ft_memchr_not_found(void);
void    test_ft_memchr_empty_string(void);

void    test_ft_substr_basic(void);
void    test_ft_substr_empty_string(void);
void    test_ft_substr_out_of_bounds(void);

void    test_ft_itoa_basic(void);
void    test_ft_itoa_negative(void);
void    test_ft_itoa_zero(void);

void    test_ft_putnbr_fd_basic(void);
void    test_ft_putnbr_fd_negative(void);
void    test_ft_putnbr_fd_zero(void);

void    test_ft_isascii(void);

#endif
