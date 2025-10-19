/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:22:35 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/18 23:47:12 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_length;

	src_length = ft_strlen(src);
	if (size == 0)
		return (src_length);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_length);
}

#include <stdio.h>
#include <ctype.h>
int	main()
{
	char	*str;
	int	len;

	str = (char *)malloc(20);
	len = ft_strlcpy(str, (const char *)"123456789", 4);
	printf("len : %d\n", len);
	if (str[9] != '\0' || len != 9
			|| ft_strlcpy(str, (const char *)"123456789", 4) != 9 
			|| ft_strlcpy(str, (const char *)"", 20) != 0
			|| ft_strlcpy(str, (const char *)"1", 20) != 1
			|| ft_strlcpy(str, (const char *)"12345678901234567890", 20)
			!= 20|| str[20] != '\0')
	{
		printf("Error in ft_strlcpy Function ❌\n");
	}
	else
	{
		printf("ft_strlcpy Function is Correct ✅\n");
	}
	free(str);
}

