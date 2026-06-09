#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>
int main(void)
{
    char str1[] = "bclraltiplam";
    // char str2[] = "caio";
    //  char str3[] = "casa";
    // char str4[] = "caio";
    // size_t ft = ft_strlcat(str1, str2, 2);
    // size_t og = strlcat(str3, str4, 2);
    printf("%s", ft_strrchr(str1, 'l'));
    // printf("FT %s OG %s \n", str1, str3);
    return (0);
}