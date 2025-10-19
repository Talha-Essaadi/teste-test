/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:35:59 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/15 16:08:05 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_vars	var;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	var.acc = lst;
	var.node = (t_list *)malloc(sizeof(t_list));
	if (!var.node)
		return (NULL);
	var.node->content = f(lst->content);
	var.node->next = NULL;
	var.head = var.node;
	var.acc2 = var.head;
	var.acc = var.acc->next;
	while (var.acc != NULL)
	{
		var.node = (t_list *)malloc(sizeof(t_list));
		if (!var.node)
			return (NULL);
		var.node->content = f(var.acc->content);
		var.node->next = NULL;
		var.acc2->next = var.node;
		var.acc2 = var.acc2->next;
		var.acc = var.acc->next;
	}
	return (var.head);
}
