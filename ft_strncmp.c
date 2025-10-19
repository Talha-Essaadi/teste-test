/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 19:49:33 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/19 18:24:02 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (s1 == NULL || s2 == NULL)
		return (0);
	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("firt is '1' second is empty n = 10 : %d _ %d\n", strncmp("", "Z",
			10), ft_strncmp("", "Z", 10));
	if (ft_strncmp("0123456789", "0123456789", 10) != strncmp("0123456789",
			"0123456789", 10) || ft_strncmp("0123456789", "0123456789",
			11) != strncmp("0123456789", "0123456789", 11)
		|| ft_strncmp("0123456789", "0123456789", 9) != strncmp("0123456789",
			"0123456789", 9) || ft_strncmp("0123456789", "0123456789",
			15) != strncmp("0123456789", "0123456789", 15)
		|| ft_strncmp("012345672", "012345671", 9) != strncmp("012345672",
			"012345671", 9) || ft_strncmp("012345672", "012345673",
			9) != strncmp("012345672", "012345673", 9)
		|| ft_strncmp("0123456789", "0123456789", 0) != strncmp("0123456789",
			"0123456789", 0) || ft_strncmp("", "", 10) != strncmp("", "", 10))
	{
		printf("Error in ft_strncmp Function ❌\n");
	}
	else
	{
		printf("ft_strncmp Function is Correct ✅\n");
	}
}
