# libft


# Foridden
```
1. Declaring global variables is strictly forbidden.



3. "Some of the function prototypes you need to reimplement use the
’restrict’ qualifier. This keyword is part of the C99 standard.
Therefore, it is forbidden to include it in your own prototypes or to
compile your code with the -std=c99 flag."

        What is restrict?

        restrict is a keyword introduced in C99 that tells the compiler:
        “This pointer is the only way to access the memory it points to.”
        That means — no other pointer will reference the same memory region.
        It’s mainly used to help the compiler optimize code safely.


```
##



# Questios :
```

1. "always check that the functions used in your library comply with the project
guidelines. " What this word means?

2. what is "bus error" mean and ?

3. what is the defination of "bus error" "segmentation fault" "double free" ?

7. " We encourage you to create test programs for your project even though this work
won’t have to be submitted and won’t be graded. It will give you a chance
to easily test your work and your peers’ work. You will find those tests especially
useful during your defence. Indeed, during defence, you are free to use your tests
and/or the tests of the peer you are evaluating."

- how the tests files will not be evaluating should i add them to a specific folder ?


9. "Some functions that you must reimplement, such as strlcpy, strlcat,
and bzero, are not included by default in the GNU C Library (glibc).
To test them against the system standard, you may need to include
<bsd/string.h> and compile with the -lbsd flag.
This behaviour is specific to glibc systems. If you are curious,
take the opportunity to explore the differences between glibc and BSD
libc."

```



# Algorithme :
```
1. check all functions

2. what is the deffrece between glibc and BSD libc

5. dont forget typecasting

14. define this :
    "BSD systems and isn’t part of the C standard."

17. count files 
    ls -la | wc -l = 48 - 3 = 45
    part 1 : 23 file
    part 2 : 11 file
    bonus  : 9 file 
    mk & .h: 2 files
    total  : 45

21. create script for check forbidden

22. create script for check 42 header

27. check type casting in all functions

28. use flagsin test script.sh

33. if malloc returned NULL we have free previous allocation

34. "int     ft_atoi(const char *nptr)" if nptr == NULL what should i return ?
    - Answer : return 0 this Answer from man page

35. "int	ft_lstsize(t_list *lst)" if lst == NULL what should i return ? 
    - Answer : return 0 beacase if head == NULL its mean no node find so return size == 0
36. "int     ft_memcmp(const void *s1, const void *s2, size_t n)" 
    - what should i return if s1 or s2 == NULL ?
37. "size_t  ft_strlcat(char *dst, const char *src, size_t size)"
    - if dst or src == NULL what should i return ? 
38. "size_t  ft_strlcpy(char *dst, const char *src, size_t size)" 
    "size_t	ft_strlen(const char *s)"
    "int     ft_strncmp(const char *s1, const char *s2, size_t n)"
    - if dst or src == NULL what should i return ? 

40. test split if it work when malloc return NULL





```



# Test Cases :
```




# ft_memchr :
void    *ft_memchr(const void *s, int c, size_t n);

- if the the value of c is higher than 255 hat should i do ?

# ft_substr :
char *ft_substr(char const *s, unsigned int start, size_t len);

- if (start > len) what should i return ?

# ft_split :
- i need to add ft_strncpy

# ft_lstmap :
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
    - we dont need the function del ?   


# ft_strmapi :

"Applies the function f to each character of the
string s, passing its index as the first argument
and the character itself as the second. A new
string is created (using malloc(3)) to store the
results from the successive applications of f."

    - how to know if f applications is successive ??
```
