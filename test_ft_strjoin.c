/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:45:02 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/19 18:17:26 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*s3;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	s3 = (char *)malloc(len);
	if (s3 == NULL)
		return (NULL);
	s3[0] = '\0';
	ft_strlcat(s3, s1, len);
	ft_strlcat(s3, s2, len);
	return (s3);
}


#include <stdio.h>
#include <ctype.h>
int	main()
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = "12345";
	s2 = "6789";
	s3 = ft_strjoin(s1, s2);
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);
	printf("s3 : %s\n", s3);
	printf("c : %c\n", ft_strjoin("", "1")[0]);
	if (s3[9] != '\0' || ft_strncmp(s3 , "123456789", 10) != 0 || ft_strjoin("", "")[0] != '\0'
			|| ft_strjoin("1", "")[0] != '1' || ft_strjoin("", "1")[0] != '1' || ft_strjoin("1", "")[1] != '\0'
			|| ft_strjoin("ABC", "E")[3] != 'E')
	{
		printf("Error in ft_strjoin Function ❌\n");
	}
	else
	{
		printf("ft_strjoin Function is Correct ✅\n");
	}
	free(s3);
}
