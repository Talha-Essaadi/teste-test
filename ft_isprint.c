/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 21:27:56 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/16 12:28:42 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	return (0);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("a : %d\n", isprint('a'));
	printf("31 : %d\n", isprint(31));
	printf("0 : %d\n", isprint('\0'));
	if (ft_isprint('a') != isprint('a') || ft_isprint('z') != isprint('z')
		|| ft_isprint('A') != isprint('A') || ft_isprint('Z') != isprint('Z')
		|| ft_isprint('}') != isprint('}') || ft_isprint(255) != isprint(255)
		|| ft_isprint(256) != isprint(256) || ft_isprint(2147483647) != 0
		|| ft_isprint(-2147483648) != 0)
	{
		printf("Error in ft_isprint Function ❌\n");
	}
	else
	{
		printf("ft_isprint Function is Correct ✅\n");
	}
}
