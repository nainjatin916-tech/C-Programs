#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    char *p = str1 + strlen(str1);
    char *q = str2;
    while(*q) {
        *p = *q;
        p++;
        q++;
    }
    *p = '\0';

    printf("Concatenated string: %s\n", str1);
    return 0;
}