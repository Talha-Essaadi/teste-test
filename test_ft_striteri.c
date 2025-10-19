/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:12:36 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/19 00:23:44 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}


#include <stdio.h>
#include <ctype.h>
void	t_ft_toupper(unsigned int i, char *c)
{
	char	letter;

	i = 0;
	if (ft_isascii(*c) == 0)
		return ;
	letter = (char)*c;
	if (letter >= 'a' && letter <= 'z')
		*c = *c - 32 ;
}


int	main()
{
	char	s1[] = "abcde";;
	char	s2[] = "a";
	char	s3[] = "";

	ft_striteri(s1, t_ft_toupper);
	ft_striteri(s2, t_ft_toupper);
	ft_striteri(s2, t_ft_toupper);
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);
	printf("s3 : %s\n", s3);
	if (ft_strncmp(s1, "ABCDE", 5) != 0 || s1[5] != '\0' || ft_strncmp(s2, "A", 1) != 0 || s2[1] != '\0'
		|| ft_strncmp(s3, "", 1) != 0 || s3[0] != '\0')
	{
		printf("Error in ft_striteri Function ❌\n");
	}
	else
	{
		printf("ft_striteri Function is Correct ✅\n");
	}

}

