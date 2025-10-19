/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:31:09 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/19 18:25:49 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
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

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	*str;
	int		n;

	str = (char *)malloc(20);
	ft_strlcpy(str, "12A34", 20);
	str[2] = 125;
	n = 125;
	printf("s 12: %s\n", strrchr((const char *)str, n));
	printf("ft_s 12: %s\n", ft_strrchr((const char *)str, n));
	n = 125;
	printf("s : %s\n", strrchr((const char *)"12", n));
	printf("ft_s : %s\n", ft_strrchr((const char *)"12", n));
	if (ft_strrchr((const char *)"12", 125) != strrchr((const char *)"12", 125)
		|| ft_strrchr((const char *)"123456", 48
			+ 6) != strrchr((const char *)"123456", 48 + 6)
		|| ft_strrchr((const char *)"", 0) != strrchr((const char *)"", 0)
		|| ft_strrchr((const char *)"1", 48 + 1) != strrchr((const char *)"1",
			48 + 1) || ft_strrchr((const char *)"12345678", 48
			+ 5) != strrchr((const char *)"12345678", 48 + 5))
	{
		printf("Error in ft_strrchr Function ❌\n");
	}
	else
	{
		printf("ft_strrchr Function is Correct ✅\n");
	}
	free(str);
}
