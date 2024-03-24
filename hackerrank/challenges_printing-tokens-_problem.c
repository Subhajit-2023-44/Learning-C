// Given a sentence, , print each word of the sentence in a new line.

#include <stdio.h>
#include <string.h>

void print_words(char *sentence)
{
    int i, start = 0;
    for (i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == ' ')
        {
            sentence[i] = '\0';
            printf("%s\n", sentence + start);
            start = i + 1;
        }
    }
    printf("%s\n", sentence + start);
}

int main()
{
    char sentence[1000];
    scanf("%[^\n]%*c", sentence);

    print_words(sentence);

    return 0;
}
