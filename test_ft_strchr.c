/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:22:56 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/18 23:48:22 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;
	char	letter;
	char	*str;

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

#include <stdio.h>
#include <ctype.h>
int	main()
{
	char	*str;
	int	n;

	str = (char *)malloc(20);
	ft_strlcpy(str, "12A34", 20);
	n = 82241;
	printf("s : %s\n", strchr((const char *)str, n));
	printf("ft_s : %s\n", ft_strchr((const char *)str, n));

	if (ft_strchr((const char *)"12", 125) != strchr((const char *)"12", 125)
			|| ft_strchr((const char *)"123456", 48 + 6) != strchr((const char *)"123456", 48 + 6)
			|| ft_strchr((const char *)"", 0) != strchr((const char *)"", 0)
			|| ft_strchr((const char *)"1", 48 + 1 ) != strchr((const char *)"1", 48 + 1)
			|| ft_strchr((const char *)"12345678", 48 + 5) != strchr((const char *)"12345678", 48 + 5))
	{
		printf("Error in ft_strchr Function ❌\n");
	}
	else
	{
		printf("ft_strchr Function is Correct ✅\n");
	}
	free(str);
}

