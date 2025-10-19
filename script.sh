#!/bin/bash

# Part I

# isalpha :
cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_isalpha.c ft_isascii.c && ./a.out

# isdigit :
cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_isdigit.c ft_isascii.c && ./a.out

# isalnum :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_isalnum.c ft_isdigit.c ft_isalpha.c ft_isascii.c && ./a.out

# isascii :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_isascii.c && ./a.out

# isprint :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_isprint.c && ./a.out

# strlen :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_strlen.c && ./a.out

# toupper :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_toupper.c ft_isascii.c && ./a.out

# tolower

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_tolower.c ft_isascii.c && ./a.out

# strncmp :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_strncmp.c && ./a.out

# atoi :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_atoi.c && ./a.out

# memcmp :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_memcmp.c && ./a.out

# memcpy :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_memcpy.c && ./a.out

# calloc :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_calloc.c && ./a.out

# strlcpy :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_strlcpy.c ft_strlen.c && ./a.out

# strlcat :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_strlcat.c ft_strlcpy.c  ft_strlen.c && ./a.out

# strchr :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_strchr.c ft_strlen.c ft_strlcpy.c && ./a.out

# strrchr :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_strrchr.c ft_strlen.c ft_strlcpy.c && ./a.out

# strnstr :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_strnstr.c ft_strlcpy.c ft_strlen.c && ./a.out

# strdup :

cc -Wall -Wextra -Werror  test_ft_strdup.c ft_strlen.c ft_strncmp.c && ./a.out

# bzero :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_bzero.c ft_strncmp.c ft_strdup.c ft_strlen.c && ./a.out

# memset :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_memset.c ft_strdup.c ft_strlen.c ft_strncmp.c && ./a.out

# memchr : 

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_memchr.c ft_strlcpy.c ft_strlen.c && ./a.out

# calloc :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_calloc.c && ./a.out

# memmove :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_memmove.c ft_strlcpy.c ft_strncmp.c ft_strlen.c && ./a.out


# Part II

# ft_substr :

cc -Wall -Wextra -Werror  test_ft_substr.c ft_strncmp.c && ./a.out

# ft_putstr_fd

cc -Wall -Wextra -Werror  test_ft_putstr_fd.c ft_putchar_fd.c ft_strncmp.c && ./a.out 

# ft_putchar_fd

cc -Wall -Wextra -Werror  test_ft_putchar_fd.c  ft_strncmp.c && ./a.out



# ft_strjoin :

cc -Wall -Wextra -Werror  test_ft_strjoin.c ft_strlen.c ft_strncmp.c ft_strlcat.c && ./a.out


# ft_split : 

cc -Wall -Wextra -Werror  test_ft_split.c ft_strlen.c ft_strncmp.c ft_strlcat.c ft_strlcpy.c && ./a.out


# ft_itoa :

cc -Wall -Wextra -Werror  test_ft_itoa.c ft_strlen.c ft_strncmp.c && ./a.out

# ft_strtrim :

cc -Wall -Wextra -Werror  test_ft_strtrim.c ft_strlen.c ft_strncmp.c ft_strdup.c && ./a.out

# ft_strtrim :

cc -Wall -Wextra -Werror  test_ft_strmapi.c ft_strlen.c ft_isascii.c ft_strncmp.c && ./a.out

# ft_iteriti :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_striteri.c ft_strlen.c ft_isascii.c ft_strncmp.c && ./a.out

# ft_lstnew :

cc -Wall -Wextra -Werror  test_ft_lstnew_bonus.c ft_strncmp.c  && ./a.out

# ft_lstadd_front ft_lstadd_back ft_lstsize : 

cc -Wall -Wextra -Werror -fsanitize=address -g3  -fsanitize=address -g3 -g  test_ft_lstadd_front_bonus.c test_ft_lstadd_back_bonus.c test_ft_lstsize_bonus.c ft_strlcat.c ft_strlen.c test_ft_lstlast_bonus.c  ft_strdup.c test_ft_lstiter_bonus.c test_ft_lstmap_bonus.c test_ft_lstclear_bonus.c  ft_lstnew_bonus.c  test_ft_lstdelone_bonus.c &&  ./a.out

rm -rf tmp

