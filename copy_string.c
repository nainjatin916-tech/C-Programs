#include <stdio.h>
#include <string.h>

int main() {
    char src[100], dest[100];
    printf("Enter a string: ");
    gets(src);

    char *s = src;
    char *d = dest;

    while(*s) {
        *d = *s;
        s++;
        d++;
    }
    *d = '\0';

    printf("Copied string: %s\n", dest);
    return 0;
}