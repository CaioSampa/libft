#include <stdio.h>

size_t ft_strlen (char *str) {
    size_t len = 0;
    while (*(str + len) != '\0') len++;
    return len;
}

