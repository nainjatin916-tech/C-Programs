#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    char *ptr = str;
    while(*ptr) {
        if(*ptr >= 'a' && *ptr <= 'z') {
            *ptr = *ptr - 'a' + 'A';
        }
        ptr++;
    }

    printf("Uppercase string: %s\n", str);
    return 0;
}