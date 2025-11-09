#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    char *p = str1;
    char *q = str2;

    while(*p && (*p == *q)) {
        p++;
        q++;
    }

    if(*p == *q)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}