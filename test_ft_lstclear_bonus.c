/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstclear_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:47:55 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/19 17:43:51 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*acc;
	t_list	*prev;
	
	prev = NULL;
	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	acc = *lst;
	while (acc != NULL)
	{
		prev = acc->next;
		ft_lstdelone(acc, del);
		acc = prev;
	}
	*lst = NULL;
}
