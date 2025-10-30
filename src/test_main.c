/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 19:09:43 by kbarru            #+#    #+#             */
/*   Updated: 2024/11/24 20:41:04 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void setUp(void) {
    printf("\n");
}

void tearDown(void) {
    // Tear down code here
}

int main(void)
{
    UNITY_BEGIN();


    printf("\n\n---- FT_ISALPHA ----\n\n");
    RUN_TEST(test_ft_isalpha_basic);
    RUN_TEST(test_ft_isalpha_extended);

    printf("\n\n---- FT_ISDIGIT ----\n\n");
    RUN_TEST(test_ft_isdigit_basic);
    RUN_TEST(test_ft_isdigit_extended);

    printf("\n\n---- FT_ISALNUM ----\n\n");
    RUN_TEST(test_ft_isalnum_basic);
    RUN_TEST(test_ft_isalnum_extended);

    printf("\n\n---- FT_ISASCII ----\n\n");
    RUN_TEST(test_ft_isascii_basic);
    RUN_TEST(test_ft_isascii_extended);

    printf("\n\n---- FT_ISPRINT ----\n\n");
    RUN_TEST(test_ft_isprint_extended);

        printf("\n\n---- FT_STRLEN ----\n\n");
    RUN_TEST(test_ft_strlen_basic);
    RUN_TEST(test_ft_strlen_empty_string);
    
    printf("\n\n---- FT_MEMSET ----\n\n");
    RUN_TEST(test_ft_memset_basic);
    RUN_TEST(test_ft_memset_zero_length);
    RUN_TEST(test_ft_memset_full_length);
    RUN_TEST(test_ft_memset_partial_length);

    printf("\n\n---- FT_BZERO ----\n\n");
    RUN_TEST(test_ft_bzero_basic);
    RUN_TEST(test_ft_bzero_zero_length);
    RUN_TEST(test_ft_bzero_full_length);
    RUN_TEST(test_ft_bzero_partial_length);

    printf("\n\n---- FT_MEMCPY ----\n\n");
    RUN_TEST(test_ft_memcpy_basic);
    RUN_TEST(test_ft_memcpy_overlap);
    RUN_TEST(test_ft_memcpy_no_overlap);
    RUN_TEST(test_ft_memcpy_zero_length);

    printf("\n\n---- FT_MEMMOVE ----\n\n");
    RUN_TEST(test_ft_memmove_basic);
    RUN_TEST(test_ft_memmove_overlap);
    RUN_TEST(test_ft_memmove_no_overlap);
    RUN_TEST(test_ft_memmove_zero_length);

    printf("\n\n---- FT_STRLCPY ----\n\n");
    RUN_TEST(test_ft_strlcpy_basic);
    RUN_TEST(test_ft_strlcpy_truncate);
    RUN_TEST(test_ft_strlcpy_zero_length);

    printf("\n\n---- FT_STRLCAT ----\n\n");
    RUN_TEST(test_ft_strlcat_basic);
    RUN_TEST(test_ft_strlcat_truncate);
    RUN_TEST(test_ft_strlcat_zero_length);

    printf("\n\n---- FT_TOUPPER ----\n\n");
    RUN_TEST(test_ft_toupper_basic);
    RUN_TEST(test_ft_toupper_extended);

    printf("\n\n---- FT_TOLOWER ----\n\n");
    RUN_TEST(test_ft_tolower_basic);
    RUN_TEST(test_ft_tolower_extended);

    printf("\n\n---- FT_STRCHR ----\n\n");
    RUN_TEST(test_ft_strchr_basic);
    RUN_TEST(test_ft_strchr_empty_string);

    printf("\n\n---- FT_STRRCHR ----\n\n");
    RUN_TEST(test_ft_strrchr_basic);
    RUN_TEST(test_ft_strrchr_empty_string);

    printf("\n\n---- FT_STRNCMP ----\n\n");
    RUN_TEST(test_ft_strncmp_basic);
    RUN_TEST(test_ft_strncmp_empty_strings);

    printf("\n\n---- FT_MEMCHR ----\n\n");
    RUN_TEST(test_ft_memchr_basic);
    RUN_TEST(test_ft_memchr_not_found);
    RUN_TEST(test_ft_memchr_empty_string);

    printf("\n\n---- FT_MEMCMP ----\n\n");
    RUN_TEST(test_ft_memcmp_basic);
    RUN_TEST(test_ft_memcmp_equal);
    RUN_TEST(test_ft_memcmp_not_equal);
    RUN_TEST(test_ft_memcmp_zero_length);

    printf("\n\n---- FT_STRNSTR ----\n\n");
    RUN_TEST(test_ft_strnstr_found);
    RUN_TEST(test_ft_strnstr_not_found);
    RUN_TEST(test_ft_strnstr_empty_little);
    RUN_TEST(test_ft_strnstr_little_longer_than_big);
    RUN_TEST(test_ft_strnstr_partial_match);
    RUN_TEST(test_ft_strnstr_len_less_than_big);
    RUN_TEST(test_ft_strnstr_empty_big);
    
    printf("\n\n---- FT_ATOI ----\n\n");
    RUN_TEST(test_ft_atoi_with_positive_numbers);
    RUN_TEST(test_ft_atoi_with_negative_numbers);
    RUN_TEST(test_ft_atoi_with_zero);
    RUN_TEST(test_ft_atoi_with_non_numeric_characters);
    RUN_TEST(test_ft_atoi_with_empty_string);
    RUN_TEST(test_ft_atoi_with_spaces);

    printf("\n\n---- FT_CALLOC ----\n\n");
    RUN_TEST(test_ft_calloc_basic);
    RUN_TEST(test_ft_calloc_zero_elements);
    RUN_TEST(test_ft_calloc_zero_size);

    printf("\n\n---- FT_STRDUP ----\n\n");
    RUN_TEST(test_ft_strdup_basic);
    RUN_TEST(test_ft_strdup_empty_string);

    printf("\n\n---- FT_SUBSTR ----\n\n");
    RUN_TEST(test_ft_substr_basic);
    RUN_TEST(test_ft_substr_empty_string);
    RUN_TEST(test_ft_substr_out_of_bounds);

    printf("\n\n---- FT_STRJOIN ----\n\n");
    RUN_TEST(test_ft_strjoin_basic);
    RUN_TEST(test_ft_strjoin_empty_strings);
    RUN_TEST(test_ft_strjoin_one_empty_string);

    printf("\n\n---- FT_STRTRIM ----\n\n");
    RUN_TEST(test_strtrim_basic);
    RUN_TEST(test_strtrim_x);
    RUN_TEST(test_strtrim_abc);
    RUN_TEST(test_strtrim_42);
    RUN_TEST(test_strtrim_no_trimming_needed);
    RUN_TEST(test_strtrim_empty_string);
    RUN_TEST(test_strtrim_spaces);
    RUN_TEST(test_strtrim_special_characters);
    RUN_TEST(test_strtrim_mixed_characters);
    RUN_TEST(test_strtrim_only_set_characters);

    printf("\n\n---- FT_SPLIT ----\n\n");
    RUN_TEST(test_ft_split_basic);
    RUN_TEST(test_ft_split_empty_string);
    RUN_TEST(test_ft_split_no_delimiters);
    RUN_TEST(test_ft_split_only_delimiters);
    RUN_TEST(test_ft_split_multiple_delimiters);

    printf("\n\n---- FT_ITOA ----\n\n");
    RUN_TEST(test_ft_itoa_basic);
    RUN_TEST(test_ft_itoa_negative);
    RUN_TEST(test_ft_itoa_zero);

    printf("\n\n---- FT_STRMAPI ----\n\n");
    RUN_TEST(test_ft_strmapi_basic);
    RUN_TEST(test_ft_strmapi_empty_string);

    printf("\n\n---- FT_STRITERI ----\n\n");
    RUN_TEST(test_ft_striteri_basic);
    RUN_TEST(test_ft_striteri_empty_string);

    printf("\n\n---- FT_PUTCHAR_FD ----\n\n");
    RUN_TEST(test_ft_putchar_fd_basic);

    printf("\n\n---- FT_PUTSTR_FD ----\n\n");
    RUN_TEST(test_ft_putstr_fd_basic);
    RUN_TEST(test_ft_putstr_fd_empty_string);

    printf("\n\n---- FT_PUTENDL_FD ----\n\n");
    RUN_TEST(test_ft_putendl_fd_basic);
    RUN_TEST(test_ft_putendl_fd_empty_string);

    printf("\n\n---- FT_PUTNBR_FD ----\n\n");
    RUN_TEST(test_ft_putnbr_fd_basic);
    RUN_TEST(test_ft_putnbr_fd_negative);
    RUN_TEST(test_ft_putnbr_fd_zero);

    printf("\n\n---- BONUS ----\n\n");
    
    RUN_TEST(test_ft_lst_add_front);
    RUN_TEST(test_ft_lst_add_back);

    return UNITY_END();
}
