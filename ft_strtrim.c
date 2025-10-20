/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:14:44 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/19 21:43:55 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_contain(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	t_vars	var;

	if (s1 == NULL)
		return (NULL);
	if (s1[0] == '\0' || set == NULL || set[0] == '\0')
		return (ft_strdup(s1));
	var.len = ft_strlen(s1);
	var.len--;
	while (var.len >= 0 && ft_contain(s1[var.len], set) == 1)
		var.len--;
	var.k = 0;
	var.len++;
	while (s1[var.k] && ft_contain(s1[var.k], set) == 1)
		var.k++;
	var.str = (char *)malloc(var.len - var.k + 1);
	if (var.str == NULL)
		return (NULL);
	var.j = 0;
	while (var.k < var.len)
	{
		var.str[var.j] = s1[var.k];
		var.j++;
		var.k++;
	}
	return (var.str);
}
