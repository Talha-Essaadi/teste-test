/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:02:04 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/19 18:15:23 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

static int	ft_split_logic(char const *s, char c, t_vars *ptr)
{
	while (s[ptr->i])
	{
		while (s[ptr->i] && s[ptr->i] == c)
			ptr->i++;
		if (s[ptr->i])
		{
			ptr->start = &s[ptr->i];
			while (s[ptr->i] && s[ptr->i] != c)
				ptr->i++;
			ptr->end = &s[ptr->i];
			ptr->strs[ptr->j] = (char *)malloc(ptr->end - ptr->start + 1);
			if (ptr->strs[ptr->j] == NULL)
				return (-1);
			ft_strlcpy(ptr->strs[ptr->j], ptr->start, ptr->end - ptr->start
				+ 1);
			ptr->j++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	t_vars	var;

	if (s == NULL)
		return (NULL);
	var.words = ft_count_words(s, c);
	var.strs = (char **)malloc(sizeof(char *) * (var.words + 1));
	if (var.strs == NULL)
		return (NULL);
	var.strs[var.words] = NULL;
	var.i = 0;
	var.j = 0;
	if (ft_split_logic(s, c, &var) == -1)
		return (NULL);
	return (var.strs);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	**s3;
	int		i;

	s1 = "   12345 123456    1234567   12      ";
	s3 = ft_split("   12345 123456    1234567   12      ", ' ');
	printf("s3 : %s\n", s3[0]);
	printf("%d\n", ft_strncmp(s3[0], "12345", 5));
	if (s3[4] != NULL || ft_strncmp(s3[0], "12345", 5) != 0 || ft_strncmp(s3[1],
			"123456", 6) != 0 || ft_strncmp(s3[2], "1234567", 7) != 0
		|| ft_strncmp(s3[3], "12", 2) != 0 || s3[0][5] != '\0'
		|| s3[1][6] != '\0' || s3[2][7] != '\0' || s3[3][2] != '\0'
		|| s3[4] != NULL || ft_split("", '\0')[0] != NULL || ft_split("1",
			'\0')[0][0] != '1' || ft_split("1", '\0')[0][1] != '\0'
		|| ft_split("", '1')[0] != NULL || ft_split("12", '\0')[0][2] != '\0'
		|| ft_split("ABC", 'E')[0][2] != 'C')
	{
		printf("Error in ft_split Function ❌\n");
	}
	else
	{
		printf("ft_split Function is Correct ✅\n");
	}
	i = 0;
	while (s3[i] != NULL)
	{
		free(s3[i]);
		i++;
	}
	free(s3);
}
