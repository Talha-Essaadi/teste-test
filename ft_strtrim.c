/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:14:44 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/19 19:10:00 by tessaadi         ###   ########.fr       */
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
	int		i;
	int		j;
	int		len;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	if (s1[0] == '\0' || set == NULL || set[0] == '\0')
		return (ft_strdup(s1));
	len = ft_strlen(s1);
	len--;
	while (len >= 0 && ft_contain(s1[len], set) == 1)
		len--;
	i = 0;
	len++;
	while (s1[i] && ft_contain(s1[i], set) == 1)
		i++;
	str = (char *)malloc(len - i + 1);
	if (str == NULL)
		return (NULL);
	j = 0;
	while (i < len)
	{
		str[j] = s1[i];
		j++;
		i++;
	}
	return (str);
}
