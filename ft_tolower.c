/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 21:47:15 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/16 16:24:24 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	char	letter;

	if (ft_isascii(c) == 0)
		return (c);
	letter = (char)c;
	if (letter >= 'A' && letter <= 'Z')
		return (c + 32);
	return (c);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("a : %d\n", tolower('a'));
	printf("} : %d\n", tolower('}'));
	if (ft_tolower('a') != tolower('a') || ft_tolower('z') != tolower('z')
		|| ft_tolower('A') != tolower('A') || ft_tolower('Z') != tolower('Z')
		|| ft_tolower('}') != tolower('}') || ft_tolower(255) != tolower(255)
		|| ft_tolower(256) != tolower(256)
		|| ft_tolower(2147483647) != 2147483647 || ft_tolower(-2147483648) !=
		-2147483648 || ft_tolower(1) != tolower(1)
		|| ft_tolower(0) != tolower(0) || ft_tolower(127) != tolower(127)
		|| ft_tolower(1) != tolower(1))
	{
		printf("Error in ft_tolower Function ❌\n");
	}
	else
	{
		printf("ft_tolower Function is Correct ✅\n");
	}
}
