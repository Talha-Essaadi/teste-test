/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstnew_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:23:12 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/18 15:09:43 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	if (content == NULL)
		return (NULL);
	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	if (ft_strncmp((char *)ft_lstnew((void *)"123456789")->content, "123456789",
			10) != 0 || ft_lstnew((void *)"123456789")->next != NULL
		|| ft_strncmp((char *)ft_lstnew((void *)"")->content, "", 10) != 0
		|| ft_lstnew((void *)"")->next != NULL || ft_lstnew(NULL) != NULL)
	{
		printf("Error in ft_lstnew Function ❌\n");
	}
	else
	{
		printf("ft_lstnew Function is Correct ✅\n");
	}
}
