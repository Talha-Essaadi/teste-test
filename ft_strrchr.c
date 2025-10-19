/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:31:09 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/15 22:13:54 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	letter;
	char	*str;

	i = ft_strlen(s) - 1;
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
