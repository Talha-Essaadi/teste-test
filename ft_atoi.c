/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:42:28 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/19 17:53:50 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	number;

	if (nptr == NULL)
		return (0);
	i = 0;
	sign = 1;
	number = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		number = number * 10 + (nptr[i] - '0');
		i++;
	}
	return (number * sign);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("2147483647 : %d\n", atoi("		2147483647abc"));
	printf("-2147483648 : %d\n", ft_atoi("		-2147483648abv4443"));
	if (ft_atoi("  -123abc") != atoi("  -123abc")
				|| ft_atoi("   2147483647abc") != atoi("   2147483647abc")
				|| ft_atoi("  -2147483648abc") != atoi("  -2147483648abc")
				|| ft_atoi("123abc") != atoi("123abc") || ft_atoi("   
					+-123abc    ") != atoi("    +-123abc    ")
				|| ft_atoi("  	255") != atoi("  	255") || ft_atoi("  
					- 1234") != atoi("   - 1234")
				|| ft_atoi("2147483647") != atoi("2147483647")
				|| ft_atoi("-2147483648") != atoi("-2147483648")
				|| ft_atoi("    ---000") != atoi("         ---000")
				|| ft_atoi("") != atoi(""))
	{
		printf("Error in ft_atoi Function ❌\n");
	}
	else
	{
		printf("ft_atoi Function is Correct ✅\n");
	}
}
