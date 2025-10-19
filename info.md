# libft

-----
## Forbidden :

- Only the following libc functions are allowed : `malloc(3), free(3) and write(2)`, and their usage is restricted. See below.

- You must include the necessary include system files to use one or more of the three authorized functions in your .c files. The only additional system include file you are allowed to use is string.h to have access to the constant NULL and to the type size_t. `Everything else if forbidden`.

- `It is forbidden to use global variables`

- Some of the functions’ prototypes you have to re-code use the "restrict" qualifier. This keyword is part of the c99 standard. It is therefore `forbidden to include it in your prototypes` and to
compile it with the flag -std=c99

- 

--- 
## Instructions :

- norminette : run norminette command at the root of the project 

- Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors. If this happens, your project will be considered non functional and will receive a 0 during the defence.

- All heap allocated memory space must be properly freed when necessary.

-  You must submit a file named author containing your username followed by a ’\n’ at the root of your repository,

-  You must submit a C file for each function you create, as well as a libft.h file, which will contain all the necessary prototypes as well as macros and typedefs you might need. All those files must be at the root of your repository.

-  `All .c and .h files must be at the root of your repository`. 

-  You must submit a Makefile which will compile your source files to a static library `libft.a`.

-   Your Makefile must at least contain the rules `$(NAME), all, clean, fclean et re` in the order that you will see fit.

-   Your Makefile must compile your work with the flags `-Wall, -Wextra and -Werror`.
 
-   You must include the necessary include system files to use one or more of the three authorized functions in your .c files. The only additional system include file you are allowed to use is string.h to have access to the constant NULL and to the type size_t. `Everything else if forbidden`.

- We encourage you to create test programs for your library even though this work won’t have to be submitted and won’t be graded. It will give you a chance to easily test your work and your peers’ work. You will find those tests especially useful during your defence. Indeed, during defence, you are free to use your tests and/or the tests of the peer you are evaluating.

- A string must ALWAYS end with a ’\0’, even if it is not included in the function’s
description, unless explicitly stated otherwise

- `It is forbidden to use global variables`

- If you need sub-functions to write a complex function, you must define these subfunctions as static as stipulated in the Norm.

- You must pay attention to your types and wisely use the casts when needed, especially when a void* type is involved. Generally speaking, avoid implicit casts.

- `Your functions will need to present the same prototype` and behaviors as the originals.

- Your functions’ names must be prefixed by “ft_”. For instance strlen becomes
ft_strlen.

- if the function return dynamic memory area i need to free it after used it
---

## Algorithme : 
```
1. Create libft.h file 
2. Create Makefile
3. if function has "int c" parameter and it represent character check if it ascii before use it

```

## Qeustions :
```
1. I have to write the same prototype but in this prototype "void *memset(void s[.n], int c, size_t n);"
the void s[.n] is be just in C11 but moulinette use C99 what is supose to do ?

2. should i name the functions file with the ft_ prefix ?
```

## Check :

- functions prototype                                           : pandding
- `ft_` prefix                                                  : pandding
- file name in 42 header                                        : pandding
- free after allocate                                           : pandding
- the file name and the function name are the same ?            : pandding
- close file descriptors after open it                          : pandding
- correct `while (str[i])` in memory area to `while (i < size)` : pandding
- inside malloc must be a sizeof                                : pandding
- when you copy functions from intra make sure the prototypes
are the same with man prototypes                                : pandding












# prototypes :
```c
void    ft_bzero(void *s, size_t n);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
void    ft_lstadd(t_list **alst, t_list *new);
void    ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void    ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void    ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list  *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list  *ft_lstnew(void const *content, size_t content_size);
void    *ft_memalloc(size_t size);
void    *ft_memccpy(void *dest, const void *src, int c, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    ft_memdel(void **ap);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memset(void *s, int c, size_t n);
void    ft_putchar(char c);
void    ft_putchar_fd(char c, int fd);
void    ft_putendl(char const *s);
void    ft_putendl_fd(char const *s, int fd);
void    ft_putstr_fd(char const *s, int fd);
char    *ft_strchr(const char *s, int c);
void    ft_strclr(char *s);
void    ft_strdel(char **as);
int     ft_strequ(char const *s1, char const *s2);
void    ft_striter(char *s, void (*f)(char *));
void    ft_striteri(char *s, void (*f)(unsigned int, char *));
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strmap(char const *s, char (*f)(char));
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int     ft_strnequ(char const *s1, char const *s2, size_t n);
char    *ft_strnew(size_t size);
char    *ft_strrchr(const char *s, int c);
char    **ft_strsplit(char const *s, char c);
char    *ft_strsub(char const *s, unsigned int start, size_t len);
char    *ft_strtrim(char const *s);
int     ft_tolower(int c);
int     ft_toupper(int c);
```