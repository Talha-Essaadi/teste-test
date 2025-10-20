/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:47:09 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/19 21:46:32 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	t_vars	var;

	if (dest == NULL || src == NULL)
		return (NULL);
	var.len = (int)n;
	var.s1 = (unsigned char *)dest;
	var.s2 = (unsigned char *)src;
	if (dest <= src)
	{
		var.k = 0;
		while (var.k < var.len)
		{
			var.s1[var.k] = var.s2[var.k];
			var.k++;
		}
		return (dest);
	}
	var.k = n - 1;
	while (var.k >= 0)
	{
		var.s1[var.k] = var.s2[var.k];
		var.k--;
	}
	return (dest);
}
