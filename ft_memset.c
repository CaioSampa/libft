#include <stdio.h>
#include <string.h>


int main (void) 
{
    char n1 = 'A';
    char *ptr = &n1;

    memset(ptr, 'B', 1* sizeof(char));

    printf("%c\n" , n1);

    return 0;
}