/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:22:13 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/19 18:13:36 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd == -1)
		return ;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n < 10)
	{
		ft_putchar_fd(n + '0', fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
}

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		fd;
	char	*s1;
	char	*s2;

	remove("tmp");
	fd = open("tmp", O_CREAT | O_RDWR | O_TRUNC, 0777);
	printf("fd : %d\n", fd);
	if (fd == -1)
		printf("ERROR in open!\n");
	s2 = (char *)malloc(20);
	s1 = "1234567890";
	ft_putnbr_fd(-2147483648, fd);
	/*
	// remove("tmp");
	fd = open("tmp",O_RDWR);
	printf("fd : %d\n", fd);
		if (fd == -1)
				printf("ERROR in open!\n");
	read(fd, (void *)s2, 10);
	close(fd);
	printf("s2 : %s\n", s2);
	if (ft_strncmp(s2,s1,10) != 0)
	{
		printf("Error in ft_putnbr_fd Function ❌\n");
	}
	else
	{
		printf("ft_putnbr_fd Function is Correct ✅\n");
	}
	*/
}
