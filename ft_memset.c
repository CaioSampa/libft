
void * ft_memset (void *ptr, int c, int n) 
{
    char *ptr2 = ptr;

    while (n--) {
        *ptr2++ = c;
    }

    return ptr;
}