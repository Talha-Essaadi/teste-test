/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:00:30 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/19 18:10:54 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	letter;
	unsigned char	*str;

	if (s == NULL)
		return (NULL);
	i = 0;
	// check if c between 0 and 255
	// check if can c be negative and represented as unsigned char ?
	str = (unsigned char *)s;
	letter = (unsigned char)c;
	while (i < n)
	{
		str[i] = letter;
		i++;
	}
	return (s);
}
