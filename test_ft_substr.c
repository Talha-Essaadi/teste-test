/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:53:22 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/19 18:26:44 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (s == NULL)
		return (NULL);
	str = (char *)malloc(len + 1);
	i = (size_t)start;
	if (str == NULL)
		return (NULL);
	j = 0;
	while (s[i] && j < len)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	printf("str : %s\n",ft_substr("0123456789", 4, 5));
	if (ft_strncmp(ft_substr("0123456789",5 , 10),"56789",5) != 0
			|| ft_strncmp(ft_substr("0123456789",0 , 10),"0123456789",10) != 0
			|| ft_strncmp(ft_substr("0123456789",9 , 10),"9",1) != 0
			|| ft_strncmp(ft_substr("0123456789",9 , 1),"9",1) != 0
			|| ft_strncmp(ft_substr("0123456789",9 , 0),"",1) != 0)
	{
		printf("Error in ft_substr Function ❌\n");
	}
	else
	{
		printf("ft_substr Function is Correct ✅\n");
	}
}

