
void ft_bzero (void *s, size_t n) {
    unsigned char *toZero = s;
    while(n--){
        *toZero++ = '\0';
    }
}
