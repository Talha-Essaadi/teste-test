/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 21:30:09 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/16 16:23:01 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	char	letter;

	if (ft_isascii(c) == 0)
		return (c);
	letter = (char)c;
	if (letter >= 'a' && letter <= 'z')
		return (c - 32);
	return (c);
}

#include <stdio.h>
#include <ctype.h>
int	main()
{
	printf("a : %d\n", toupper('a'));
	printf("} : %d\n", toupper('}'));
	if (ft_toupper('a') != toupper('a') || ft_toupper('z') != toupper('z') || ft_toupper('A') != toupper('A')
			|| ft_toupper('Z') != toupper('Z') || ft_toupper('}') != toupper('}')
			|| ft_toupper(255) != toupper(255) || ft_toupper(256) != toupper(256)
			|| ft_toupper(2147483647) != 2147483647 || ft_toupper(-2147483648) != -2147483648
			|| ft_toupper(1) != toupper(1) || ft_toupper(0) != toupper(0)
			|| ft_toupper(127) != toupper(127) || ft_toupper(1) != toupper(1))
	{
		printf("Error in ft_toupper Function ❌\n");
	}
	else
	{
		printf("ft_toupper Function is Correct ✅\n");
	}
}
