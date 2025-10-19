/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 21:54:29 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/19 17:55:42 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*str;

	if (!s)
		return ;
	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}


#include <stdio.h>
#include <ctype.h>
int	main()
{
	char	*s1;
	char	*s2;
	typedef struct s_node {
		int	x;
		char	*str;
		char	c;
	}	t_node;

	t_node a;
	t_node b;

	a.x = 43434;
	b.x = 121223;
	a.c = 'A';
	b.c = 'Z';
	s1 = ft_strdup("123456789");
	s2 = ft_strdup("12345678901234567890");
	ft_bzero(s1, 9);
	ft_bzero(s2, 20);
	ft_bzero((void *)&a, sizeof(t_node));
	ft_bzero((void *)&b, sizeof(t_node));
	if (ft_strncmp((const char *)s1, (const char *)"\0\0\0\0\0\0\0\0\0", 9) != 0
			|| ft_strncmp((const char *)s2, (const char *)s1, sizeof(t_node)) != 0
			|| ft_strncmp((const char *)&a, (const char *)&b, sizeof(t_node)) != 0)
	{
		printf("Error in ft_bzero Function ❌\n");
	}
	else
	{
		printf("ft_bzero Function is Correct ✅\n");
	}
	free(s1);
	free(s2);
}

