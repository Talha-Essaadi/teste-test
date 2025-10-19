/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:17:26 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/19 18:16:26 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*str;

	if (s == NULL)
		return (NULL);
	str = (char *)malloc(ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

#include <stdio.h>
#include <ctype.h>
int	main()
{
	if (ft_strncmp((const char *)ft_strdup("123456789"), (const char *)"123456789", 9) != 0
				|| ft_strncmp((const char *)ft_strdup("123456789"), (const char *)"123456789", 10) != 0
				|| ft_strncmp((const char *)ft_strdup(""), (const char *)"", 10) != 0
				|| ft_strncmp((const char *)ft_strdup("1"), (const char *)"1", 1) != 0)
	{
		printf("Error in ft_strdup Function ❌\n");
	}
	else
	{
		printf("ft_strdup Function is Correct ✅\n");
	}
}
