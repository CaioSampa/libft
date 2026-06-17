
#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>
#include <stdlib.h>

int ft_isalpha(char c);
int ft_isdigit(char c);
int ft_isprint(int c);
int ft_isacii(int c);
int ft_isalnum(char c);
int ft_toupper(int c);
int ft_tolower(int c);

void ft_bzero(void *s, size_t n);
void *ft_memmove(void *dest, void *src, size_t n);
void *ft_memcpy(void *dest, void *src, int count);
void *ft_memset(void *ptr, int c, size_t n);

size_t ft_strlcpy(char *d, const char *s, size_t buffer);
size_t ft_strlen(char *str);
size_t ft_strlcat(char *dst, const char *src, size_t size);

char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);

int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_atoi(const char *nptr);
int ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
void *ft_memchr(const void *s, int c, size_t n);
void *ft_calloc(size_t nmemb, size_t size);
char *ft_strdup(const char *s);
char *ft_strnstr(const char *big, const char *little, size_t len);

char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

#endif