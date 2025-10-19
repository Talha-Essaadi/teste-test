/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putendl_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:07:09 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/19 18:13:00 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL || fd == -1)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
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
	ft_putendl_fd("1234567890", fd);
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
