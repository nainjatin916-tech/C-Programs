#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character to find: ");
    scanf("%c", &ch);

    char *ptr = str;
    int pos = -1, i = 0;
    while(*ptr) {
        if(*ptr == ch) {
            pos = i;
            break;
        }
        ptr++;
        i++;
    }

    if(pos != -1)
        printf("Character found at position: %d\n", pos);
    else
        printf("Character not found\n");

    return 0;
}