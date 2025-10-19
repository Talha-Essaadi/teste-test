/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:36:45 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/18 23:53:28 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	letter;
	unsigned char	*str;

	letter = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == letter)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

#include <stdio.h>
#include <ctype.h>
int	main()
{
	char	*str;
	int	n;

	str = (char *)malloc(20);
	ft_strlcpy(str, "12A34", 20);
	n = 82241;
	printf("s : %s\n", (char *)memchr((const void *)str, n, 5));
	printf("ft_s : %s\n", (char *)ft_memchr((const void *)str, n, 5));

	if (ft_memchr((const void *)"12", 125, 2) != memchr((const void *)"12", 125 , 2)
			|| (char *)ft_memchr((const void *)"123456", 48 + 6, 6)
			!= (char *)memchr((const void *)"123456", 48 + 6, 6)
			|| (char *)ft_memchr((const void *)"", 0, 0) != (char *)memchr((const void *)"", 0, 0)
			|| (char *)ft_memchr((const void *)"1", 48 + 1, 1) != (char *)memchr((const void *)"1", 48 + 1,1)
			|| (char *)ft_memchr((const void *)"12345678", 48 + 5,8)
			!= (char *)memchr((const void *)"12345678", 48 + 5, 8))
	{
		printf("Error in ft_memchr Function ❌\n");
	}
	else
	{
		printf("ft_memchr Function is Correct ✅\n");
	}
	free(str);
}
