/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:31:09 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/19 19:09:34 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	letter;
	char	*str;

	if (s == NULL)
		return (NULL);
	i = ft_strlen(s);
	letter = (char)c;
	str = (char *)s;
	while (i >= 0)
	{
		if (s[i] == letter)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
