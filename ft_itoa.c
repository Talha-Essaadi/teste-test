/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:35:46 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/18 10:59:36 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static void	ft_reverse_string(int i, char *str)
{
	int		len;
	char	c;

	len = ft_strlen(str) - 1;
	while (i < len)
	{
		c = str[i];
		str[i] = str[len];
		str[len] = c;
		i++;
		len--;
	}
}

char	*ft_itoa(int n)
{
	t_vars	var;

	var.i = 0;
	var.sign = 0;
	var.str = (char *)malloc(20);
	if (var.str == NULL)
		return (NULL);
	var.str[0] = '\0';
	if (n == 0)
		return ("0");
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		var.str[var.i] = '-';
		n = -n;
		var.sign = 1;
		var.i++;
	}
	while (n > 0)
	{
		var.str[var.i] = (n % 10) + '0';
		n = n / 10;
		var.i++;
	}
	var.str[var.i] = '\0';
	ft_reverse_string(var.sign, var.str);
	return (var.str);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = ft_itoa(2147483647);
	s2 = ft_itoa(-0);
	s3 = ft_itoa(-2147483648);
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);
	printf("s3 : %s\n", s3);
	printf("c : %c\n", ft_itoa(-1)[0]);
	if (s3[11] != '\0' || ft_strncmp(s3, "-2147483648", 11) != 0
		|| ft_itoa(0)[0] != '0' || ft_itoa(-1)[0] != '-'
		|| ft_itoa(-1)[1] != '1' || ft_itoa(-1)[2] != '\0'
		|| ft_itoa(1337)[4] != '\0' || ft_strncmp(ft_itoa(2147483647),
			"2147483647", 10) != 0 || ft_strncmp(ft_itoa(0), "0", 10) != 0
		|| ft_strncmp(ft_itoa(-1337), "-1337", 10) != 0
		|| ft_strncmp(ft_itoa(1), "1", 10) != 0 || ft_strncmp(ft_itoa(1337),
			"1337", 10) != 0)
	{
		printf("Error in ft_itoa Function ❌\n");
	}
	else
	{
		printf("ft_itoa Function is Correct ✅\n");
	}
}
