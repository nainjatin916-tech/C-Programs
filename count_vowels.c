#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    char *ptr = str;
    int count = 0;
    while(*ptr) {
        if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'||
           *ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U') {
            count++;
        }
        ptr++;
    }

    printf("Number of vowels: %d\n", count);
    return 0;
}