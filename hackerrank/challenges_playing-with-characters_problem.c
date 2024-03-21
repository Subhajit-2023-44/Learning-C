// You have to print the character, , in the first line. Then print  in next line. In the last line print the sentence, .

#include <stdio.h>

int main() {
    char ch;
    char s[100];
    char sen[100];

    scanf(" %c", &ch);

    scanf("%s", s);

    scanf("\n");
    scanf("%[^\n]%*c", sen);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}
