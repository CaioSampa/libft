
#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

int	ft_isalpha(char c);
int	t_isdigit(char c);
int	ft_isprint(int c);
int	ft_isacii(int c );
int ft_isalnum (char c);
void	ft_bzero(void *s, size_t n);
void	*ft_memmove(void *dest, void *src, size_t n);
void	*ft_memcpy(void *dest, void *src, int count);
void	*ft_memset(void *ptr, int c, size_t n);
size_t  ft_strlcpy(char *d, const char *s, size_t buffer);
size_t	ft_strlen(char *str);
size_t  ft_strlcat(char *dst, const char *src, size_t size);

#endif