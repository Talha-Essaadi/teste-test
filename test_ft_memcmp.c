/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:13:59 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/16 22:05:20 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	if (n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n - 1 && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

#include <stdio.h>
#include <ctype.h>
int	main()
{
	typedef struct s_node {
		int	x;
		char c;
	}	t_node;

	t_node	var;
	t_node	var2;
	t_node	*ptr;
	t_node *ptr2;
	const void	*pr;
	const void      *pr2;
	char	*s1;
	char	*s2;

	ptr = &var;
	ptr2 = &var2;
	bzero((void *)ptr, sizeof(t_node));
	bzero((void *)ptr2, sizeof(t_node));
	s1 = "12345678A";
	var.x = 9;
	s2 = "12345678Z";
	var2.x = 1;
	pr = (const void *)ptr;
	pr2 = (const void *)ptr2;
	printf("memcmp : %d\n", memcmp(pr, pr2, sizeof(t_node)));
	printf("ft_memcmp : %d\n\n", ft_memcmp(pr, pr2, sizeof(t_node)));
	printf("memcmp : %d\n", memcmp((const void*)s1, (const void*)s2, 9));
	printf("ft_memcmp : %d\n\n", ft_memcmp((const void*)s1, (const void*)s2, 9));

	if (ft_memcmp((const void*)"0A23456789", (const void*)"0B23456789", 10)
			!= memcmp((const void*)"0A23456789", (const void*)"0B23456789", 10)
			|| ft_memcmp(pr, pr2, sizeof(t_node))
			!= memcmp(pr, pr2, sizeof(t_node)))
	{
		printf("Error in ft_memcmp Function ❌\n");
	}
	else
	{
		printf("ft_memcmp Function is Correct ✅\n");
	}
}
