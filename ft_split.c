/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:02:04 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/15 21:58:54 by tessaadi         ###   ########.fr       */
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
			ptr->strs[ptr->j] = (char *)malloc(ptr->start - ptr->end + 1);
			if (ptr->strs == NULL)
				return (-1);
			ft_strlcpy(ptr->strs[ptr->j], ptr->start, ptr->start - ptr->end);
			ptr->j++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	t_vars	var;

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
