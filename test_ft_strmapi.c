#include "libft.h"
#include <ctype.h>
#include <stdio.h>

char	t_ft_toupper(unsigned int i, char c)
{
	char	letter;

	i = 0;
	if (ft_isascii(c) == 0)
		return (c);
	letter = (char)c;
	if (letter >= 'a' && letter <= 'z')
		return ((char)(c - 32));
	return (c);
}
int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = "abcdefjhk";
	s2 = "6789";
	s3 = ft_strmapi(s1, t_ft_toupper);
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);
	printf("s3 : %s\n", s3);
	printf("c : %c\n", ft_strmapi("z", t_ft_toupper)[0]);
	if (s3[9] != '\0' || ft_strncmp(ft_strmapi("abcde", t_ft_toupper), "ABCDE",
			5) != 0 || ft_strmapi("", t_ft_toupper)[0] != '\0'
		|| ft_strmapi("1", t_ft_toupper)[0] != '1' || ft_strmapi("abcdef",
			t_ft_toupper)[6] != '\0' || ft_strmapi("1", t_ft_toupper)[1] != '\0'
		|| ft_strmapi("ABCe", t_ft_toupper)[3] != 'E' || ft_strmapi(NULL,
			t_ft_toupper) != NULL || ft_strmapi("1", NULL) != NULL
		|| ft_strmapi(NULL, NULL) != NULL)
	{
		printf("Error in ft_strmapi Function ❌\n");
	}
	else
	{
		printf("ft_strmapi Function is Correct ✅\n");
	}
}
