/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_return_val.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:22:48 by kbarru            #+#    #+#             */
/*   Updated: 2025/11/05 12:02:48 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include "libft.h"
#include "test.h"

void adapter_strchr(void *context)
{
	struct {const char *s; int c; char *(*f)(const char *, int);} *args = context;
	args->f(args->s, args->c);
}

void adapter_strlen(void *context)
{
	struct {const char *s; int (*f)(const char *);} *args = context;
	args->f(args->s);
}

void adapter_strncmp(void *context)
{
	struct { const char *s1; const char *s2; size_t n; int (*f)(const char *, const char *, size_t); } *args = context;
	args->f(args->s1, args->s2, args->n);
}

void adapter_strdup(void *context)
{
	struct { const char *s; char *(*f)(const char *); } *args = context;
	args->f(args->s);
}

void adapter_strlcpy(void *context)
{
	struct { char *dest; const char *src; size_t len; size_t (*f)(char *, const char *, size_t); } *args = context;
	args->f(args->dest, args->src, args->len);
}

void test_signal_equivalence(TestAdapter f1, void *context1, TestAdapter f2, void *context2)
{
	if (IGNORE_SIGNALS)
	{
		TEST_IGNORE_MESSAGE("Signal equivalence tests are disabled.");
		return ;
	}
    int pid = fork();
    if (pid == 0)	{ f1(context1); exit(-1);}
	int pid2 = fork();
    if (pid2 == 0) { f2(context2); exit(-1); }

	int status = 0;
	int status2 = 0;

	waitpid(pid, &status, 0);
	waitpid(pid2, &status2, 0);

	if (WIFSIGNALED(status2))
	{
		if (WIFSIGNALED(status))
			TEST_ASSERT_EQUAL_MESSAGE(WTERMSIG(status2), WTERMSIG(status), "signal value is incorrect");
		else
			TEST_FAIL_MESSAGE("function should signal on exit");
	}
	else
	{
		if (WIFSIGNALED(status))
			TEST_ASSERT_EQUAL_MESSAGE((status2 >> 8), (status >> 8), "exit status is incorrect");
		else
			TEST_FAIL_MESSAGE("function should not signal on exit");
	}
}

