/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:47:09 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/14 09:54:53 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	if (dest <= src)
	{
		i = 0;
		while (i < n)
		{
			s1[i] = s2[i];
			i++;
		}
		return (dest);
	}
	i = n - 1;
	while (i >= 0)
	{
		s1[i] = s2[i];
		i--;
	}
	return (dest);
}
