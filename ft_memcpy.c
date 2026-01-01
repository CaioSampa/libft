
void *ft_memcpy (void *dest, void *src, int count) {
    // faz a conversão para char*
    char *d = dest, *s = src;
    
    while(count--){
        *d++ = *s++;
    }

    return dest;
}