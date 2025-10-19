/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:47:09 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/19 18:08:47 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int			i;
	int	len;
	unsigned char	*s1;
	unsigned char	*s2;

	if (dest == NULL || src == NULL)
		return (NULL);
	if (n == 0)
		return (dest);
	len = (int)n;
	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	if (dest <= src)
	{
		i = 0;
		while (i < len)
		{
			s1[i] = s2[i];
			i++;
		}
		return (dest);
	}
	i = n - 1;
	while (i  >= 0)
	{
		s1[i] = s2[i];
		i--;
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
	char	*s1;
	char	*s2;
	char	*s3;

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
	p1 = ft_memmove(p1, (const void *)&var, sizeof(t_node));
	p2 = ft_memmove(p2, (const void *)&var2, sizeof(t_node));
	ptr1 = (t_node *)p1;
	ptr2 = (t_node *)p2;
	printf("p1->x : %d\n", ptr1->x);
	printf("p2->x : %d\n", ptr2->x);

	// No overlap
	if (ptr1->x != var.x || ptr1->c != var.c || ptr1->str != var.str
			|| ptr2->x != var2.x || ptr2->c != var2.c || ptr2->str != var2.str)
	{
		printf("Error in ft_memmove Function in No overlap ❌\n");
	}
	else
	{
		printf("ft_memmove Function is Correct in No overlap ✅\n");
	}

	// overlap
	s1 = (char *)malloc(20);
	s3 = (char *)malloc(20);
	ft_strlcpy(s1, "123456789" , 10);
	ft_strlcpy(s3, s1 , 10);
	printf("s1 : %s\n", s1);
	printf("s3 : %s\n", s3);
	ft_memmove(s1+3, s1, 10);
	s2 = s1+3;
	printf("s2 = s1+3: %s\n", s2);
	printf("s1 : %s\n", s1);
	if (ft_strncmp(s2, s3, 10) != 0)
	{
		printf("Error in ft_memmove Function in overlap❌\n");
	}
	else
	{
		printf("ft_memmove Function is Correct in overlap ✅\n");
	}
	free(p1);
	free(p2);
	free(s1);
	free(s3);
}

