#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    char *start = str;
    char *end = str + strlen(str) - 1;
    int flag = 1;

    while(start < end) {
        if(*start != *end) {
            flag = 0;
            break;
        }
        start++;
        end--;
    }

    if(flag)
        printf("String is a palindrome\n");
    else
        printf("String is not a palindrome\n");

    return 0;
}