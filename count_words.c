#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    gets(str);

    char *ptr = str;
    int words = 0;
    int inWord = 0;

    while(*ptr) {
        if(*ptr != ' ' && *ptr != '\t' && *ptr != '\n') {
            if(!inWord) {
                inWord = 1;
                words++;
            }
        } else {
            inWord = 0;
        }
        ptr++;
    }

    printf("Number of words: %d\n", words);
    return 0;
}