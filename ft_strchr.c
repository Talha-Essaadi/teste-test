/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:22:56 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/15 22:05:58 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	letter;
	char	*str;

	letter = (char)c;
	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == letter)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
