/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:12:46 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/17 18:25:22 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	char	letter;

	if (ft_isascii(c) == 0)
		return (0);
	letter = (char)c;
	if ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z'))
	{
		return (1024);
	}
	return (0);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("a : %d\n", isalpha('a'));
	printf("a : %d\n", isalpha('}'));
	if (ft_isalpha('a') != isalpha('a') || ft_isalpha('z') != isalpha('z')
		|| ft_isalpha('A') != isalpha('A') || ft_isalpha('Z') != isalpha('Z')
		|| ft_isalpha('}') != isalpha('}') || ft_isalpha(255) != isalpha(255)
		|| ft_isalpha(256) != isalpha(256) || ft_isalpha(2147483647) != 0
		|| ft_isalpha(-2147483648) != 0)
	{
		printf("Error in ft_isalpha Function ❌\n");
	}
	else
	{
		printf("ft_isalpha Function is Correct ✅\n");
	}
}
