
void ft_bzero (void *s, int n) {
    unsigned char *toZero = s;
    while(n--){
    
        *toZero++ = '\0';
    }
}

