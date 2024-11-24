#include "libft.h"
#include "test.h"
#include "unity.h"
#include <stdlib.h>

extern char	*ft_strtrim(const char *s1, const char *set);

void	test_strtrim_basic(void)
{
	char	*result;

	result = ft_strtrim("  hello  ", " ");
	TEST_ASSERT_EQUAL_STRING("hello", result);
	free(result);
}

void	test_strtrim_x(void)
{
	char	*result;

	result = ft_strtrim("xxhelloxx", "x");
	TEST_ASSERT_EQUAL_STRING("hello", result);
	free(result);
}

void	test_strtrim_abc(void)
{
	char	*result;

	result = ft_strtrim("abcabcHelloabcabc", "abc");
	TEST_ASSERT_EQUAL_STRING("Hello", result);
	free(result);
}

void	test_strtrim_42(void)
{
	char	*result;

	result = ft_strtrim("42 is the answer", "42");
	TEST_ASSERT_EQUAL_STRING(" is the answer", result);
	free(result);
}

void	test_strtrim_no_trimming_needed(void)
{
	char	*result;

	result = ft_strtrim("no trimming needed", "");
	TEST_ASSERT_EQUAL_STRING("no trimming needed", result);
	free(result);
}

void	test_strtrim_empty_string(void)
{
	char	*result;

	result = ft_strtrim("", "abc");
	TEST_ASSERT_EQUAL_STRING("", result);
	free(result);
}

void	test_strtrim_spaces(void)
{
	char	*result;

	result = ft_strtrim("   ", " ");
	TEST_ASSERT_EQUAL_STRING("", result);
	free(result);
}

void	test_strtrim_special_characters(void)
{
	char	*result;

	result = ft_strtrim("!!hello!!", "!");
	TEST_ASSERT_EQUAL_STRING("hello", result);
	free(result);
}

void	test_strtrim_mixed_characters(void)
{
	char	*result;

	result = ft_strtrim("123abcHelloabc123", "123abc");
	TEST_ASSERT_EQUAL_STRING("Hello", result);
	free(result);
}

void	test_strtrim_only_set_characters(void)
{
	char	*result;

	result = ft_strtrim("xxxx", "x");
	TEST_ASSERT_EQUAL_STRING("", result);
	free(result);
}
