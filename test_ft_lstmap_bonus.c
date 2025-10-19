/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstmap_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:35:59 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/18 18:33:08 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*acc;
	t_list	*node;
	t_list	*head;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	head = NULL;
	acc = lst;
	while (acc != NULL)
	{
		node = ft_lstnew(f(acc->content));
		if (!node)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		node->next = acc->next;
		ft_lstadd_back(&head, node);
		acc = acc->next;
	}
	return (head);
}
