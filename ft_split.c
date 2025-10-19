/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:02:04 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/19 19:01:29 by tessaadi         ###   ########.fr       */
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
	int	i;

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
			{
				i = 0;
				while (i < ptr->j)
				{
					free(ptr->strs[i]);
					i++;
				}
				return (-1);
			}
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
