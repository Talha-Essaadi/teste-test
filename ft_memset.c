/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:00:30 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/13 22:06:10 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	letter;
	char	*str;

	i = 0;
	str = (char *)s;
	letter = (char)c;
	while (i < n)
	{
		str[i] = letter;
		i++;
	}
	return (s);
}
