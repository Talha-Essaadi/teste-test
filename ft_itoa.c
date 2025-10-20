/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:35:46 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/19 21:28:59 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static void	ft_itoa_logic(int n, t_vars *ptr)
{
	while (n > 0)
	{
		ptr->str[ptr->i] = (n % 10) + '0';
		n = n / 10;
		ptr->i++;
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
	ft_itoa_logic(n, &var);
	var.str[var.i] = '\0';
	ft_reverse_string(var.sign, var.str);
	return (var.str);
}
