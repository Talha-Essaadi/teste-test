/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:22:56 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/19 18:15:56 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;
	char	letter;
	char	*str;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	letter = (char)c;
	str = (char *)s;
	i = 0;
	while (i < len + 1)
	{
		if (str[i] == letter)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
