// Oneful Pairs
// Chef defines a pair of positive integers (a,b) to be a Oneful Pair, if a+b+(a⋅b)=111

// For example, (1,55) is a Oneful Pair, since 1+55+(1⋅55)=56+55=111.
// But (1,56) is not a Oneful Pair, since 1+56+(1⋅56)=57+56=113!=111.

// Given two positive integers a and b, output Yes if they are a Oneful Pair. And No otherwise.

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a < 1 || a > 1000 || b < 1 || b > 1000) {
        printf("Invalid input. Please enter a number between 1 and 1000 for both a and b.\n");
        return 1;
    }

    int sum = a + b;
    int product = a * b;
    int total = sum + product;

    if (total == 111) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
