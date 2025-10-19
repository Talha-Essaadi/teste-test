/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:13:58 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/16 12:23:07 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("127 : %d\n", isascii(127));
	printf("255 : %d\n", isascii(255));
	if (ft_isascii('a') != isascii('a') || ft_isascii('z') != isascii('z')
		|| ft_isascii('A') != isascii('A') || ft_isascii('Z') != isascii('Z')
		|| ft_isascii('}') != isascii('}') || ft_isascii(255) != isascii(255)
		|| ft_isascii(256) != isascii(256) || ft_isascii(2147483647) != 0
		|| ft_isascii(-2147483648) != 0 || ft_isascii(127) != isascii(127)
		|| ft_isascii(0) != isascii(0))
	{
		printf("Error in ft_isascii Function ❌\n");
	}
	else
	{
		printf("ft_isascii Function is Correct ✅\n");
	}
}
