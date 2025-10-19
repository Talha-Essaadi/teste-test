/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 19:58:10 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/19 18:25:07 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;
	char	*str;

	if (big == NULL || little == NULL)
		return (NULL);
	i = 0;
	str = (char *)big;
	if (little[0] == '\0')
		return (str);
	while (big[i] && i < len)
	{
		k = 0;
		while (big[i + k] && little[k] && big[i + k] == little[k] && i
			+ k < len)
			k++;
		if (little[k] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	int		n;

	s1 = "123456";
	s2 = "helloworld";
	n = 5;
	printf("s : %s\n", ft_strnstr((const char *)"12", (const char *)"", n));
	printf("s : %s\n", ft_strnstr((const char *)"12", (const char *)"", n));
	if (ft_strnstr((const char *)s1, (const char *)"", 5) != s1
		|| ft_strnstr((const char *)s1, (const char *)"", 0) != s1
		|| ft_strnstr((const char *)s1, (const char *)"456", 6) != &s1[3]
		|| ft_strnstr((const char *)s1, (const char *)"567", 6) != NULL
		|| ft_strnstr((const char *)s1, (const char *)"1", 6) != &s1[0]
		|| ft_strnstr((const char *)s2, (const char *)"loABC", 10) != NULL
		|| ft_strnstr((const char *)s2, (const char *)"lo", 10) != &s2[3]
		|| ft_strnstr((const char *)"", (const char *)"loABC", 10) != NULL
		|| ft_strnstr((const char *)s2, (const char *)"world", 10) != &s2[5]
		|| ft_strnstr((const char *)s2, (const char *)"world", 9) != NULL
		|| ft_strnstr((const char *)s2, (const char *)"d", 10) != &s2[9])
	{
		printf("Error in ft_strnstr Function ❌\n");
	}
	else
	{
		printf("ft_strnstr Function is Correct ✅\n");
	}
}
