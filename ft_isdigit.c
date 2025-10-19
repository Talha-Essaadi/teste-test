/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:25:10 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/16 11:57:35 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	unsigned char	letter;

	if (ft_isascii(c) == 0)
		return (0);
	letter = (char)c;
	if (letter >= '0' && letter <= '9')
		return (2048);
	return (0);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("5 : %d\n", isdigit('5'));
	if (ft_isdigit(3473461) == 1 || ft_isdigit(48 + 10) != isdigit(48 + 10)
		|| ft_isdigit(48 + 9) != isdigit(48 + 9) || ft_isdigit(48
			+ 0) != isdigit(48 + 0) || ft_isdigit(48 + 255) != isdigit(48 + 255)
		|| ft_isdigit(48 + 256) != isdigit(48 + 256) || ft_isdigit(48 +
			-1) != isdigit(48 + -1) || ft_isdigit(-2147483648) == 1
		|| ft_isdigit(2147483647) == 1)
	{
		printf("Error in ft_isdigit Function ❌\n");
	}
	else
	{
		printf("ft_isdigit Function is Correct ✅\n");
	}
}
