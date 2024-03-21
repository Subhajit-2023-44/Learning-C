// This challenge requires you to print  on a single line, and then print the already provided input string to stdout. If you are not familiar with C, you may want to read about the printf() command.


#include <stdio.h>

int main() {
    char s[100];
    printf("Hello, World!\n");
    fgets(s, sizeof(s), stdin);
    printf("%s", s);
    return 0;
}