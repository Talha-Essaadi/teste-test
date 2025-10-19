/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:14:44 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/18 13:37:59 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static int	ft_contain(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	if (s1[0] == '\0' || set == NULL || set[0] == '\0')
		return (ft_strdup(s1));
	len = ft_strlen(s1);
	len--;
	while (len >= 0 && ft_contain(s1[len], set) == 1)
		len--;
	i = 0;
	len++;
	while (s1[i] && ft_contain(s1[i], set) == 1)
		i++;
	str = (char *)malloc(len - i + 1);
	if (str == NULL)
		return (NULL);
	j = 0;
	while (i < len)
	{
		str[j] = s1[i];
		j++;
		i++;
	}
	return (str);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = "##!-__  #12345 ### 123456 ::__-- 1234567 ___--::#  12#   :: ##   ";
	s2 = "#!-__: ";
	printf("s1.len : %zu\n", ft_strlen(s1));
	s3 = ft_strtrim(s1, s2);
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);
	printf("s3 : %s\n", s3);
	printf("c : %s\n", ft_strtrim("##__--  123456789", s2));
	if (s3[44] != '\0' || ft_strncmp(ft_strtrim("##__--  123456789", s2),
			"123456789", 10) != 0 || ft_strtrim("", "")[0] != '\0'
		|| ft_strtrim("1", "")[0] != '1' || ft_strtrim("", "1")[0] != '\0'
		|| ft_strtrim("1", NULL)[0] != '1' || ft_strtrim(NULL, "4343") != NULL)
	{
		printf("Error in ft_strtrim Function ❌\n");
	}
	else
	{
		printf("ft_strtrim Function is Correct ✅\n");
	}
}
