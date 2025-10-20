/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:00:05 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/18 23:44:16 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			len;
	size_t			i;
	void			*ptr;
	unsigned char	*str;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	str = (unsigned char *)malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	len = nmemb * size;
	i = 0;
	while (i < len)
	{
		str[i] = '\0';
		i++;
	}
	ptr = (void *)str;
	return (ptr);
}
