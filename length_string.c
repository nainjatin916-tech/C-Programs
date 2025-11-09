#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    char *ptr = str;
    int length = 0;
    while(*ptr) {
        length++;
        ptr++;
    }

    printf("Length of string: %d\n", length);
    return 0;
}