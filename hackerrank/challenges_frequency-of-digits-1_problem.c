// Given a string, , consisting of alphabets and digits, find the frequency of each digit in the given string.

#include <stdio.h>
#include <string.h>

#define MAX 10

int main()
{
    char str[1024];

    fgets(str, 1024, stdin);
    str[strlen(str) - 1] = '\0';

    int count[MAX] = { 0 };

    for (int i = 0; i < strlen(str); i++)
        if (str[i] >= '0' && str[i] <= '9')
            count[str[i] - '0']++;

    for (int i = 0; i < MAX; i++)
    {
        if (count[i] > 0)
            printf("%d ", count[i]);
        else
            printf("0 ");
    }

    return 0;
}
