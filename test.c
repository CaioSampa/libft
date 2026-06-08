#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>
int main(void)
{
    char str1[] = "casa";
    char str2[] = "caio";
     char str3[] = "casa";
    char str4[] = "caio";
    size_t ft = ft_strlcat(str1, str2, 4);
    size_t og = strlcat(str3, str4, 4);
    printf("FT %zu OG %zu \n", ft, og);
    printf("FT %s OG %s \n", str1, str3);
    return (0);
}