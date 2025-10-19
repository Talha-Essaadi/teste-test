/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:40:50 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/19 19:07:27 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*acc;

	if (lst == NULL || new == NULL)
		return ;
	acc = *lst;
	if (*lst == NULL)
	{
		printf("OK \n");
		*lst = new;
		new->next = NULL;
		return ;
	}
	while (acc->next != NULL)
		acc = acc->next;
	acc->next = new;
	new->next = NULL;
}
