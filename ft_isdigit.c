/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:25:10 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/13 21:21:30 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	char	letter;

	if (ft_isascii(c) == 0)
		return (0);
	letter = (char)c;
	if (letter >= '0' && letter <= '9')
		return (1);
	return (0);
}
