/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:07:23 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/19 18:06:37 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	if (dest == NULL || src == NULL)
		return (NULL);
	if (n == 0)
		return (dest);
	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dest);
}


#include <stdio.h>
#include <ctype.h>
int	main()
{
	typedef struct s_node {
		int	x;
		char c;
		char	*str;
	}	t_node;

	t_node	var;
	t_node	var2;
	t_node	*ptr1;
	t_node	*ptr2;
	void	*p1;
	void      *p2;

	var.str = "123456789";
	var.c = 'K';
	var2.c = 'M';
	bzero((void *)&var, sizeof(t_node));
	bzero((void *)&var2, sizeof(t_node));
	var.x = 9;
	var2.x = 1999;
	p1 = (void *)malloc(sizeof(t_node));
	p2 = (void *)malloc(sizeof(t_node));
	p1 = ft_memcpy(p1, (const void *)&var, sizeof(t_node));
	p2 = ft_memcpy(p2, (const void *)&var2, sizeof(t_node));
	ptr1 = (t_node *)p1;
	ptr2 = (t_node *)p2;
	printf("p1->x : %d\n", ptr1->x);
	printf("p2->x : %d\n", ptr2->x);
	if (ptr1->x != var.x || ptr1->c != var.c || ptr1->str != var.str
			|| ptr2->x != var2.x || ptr2->c != var2.c || ptr2->str != var2.str)
	{
		printf("Error in ft_memcpy Function ❌\n");
	}
	else
	{
		printf("ft_memcpy Function is Correct ✅\n");
	}
	free(p1);
	free(p2);
}
