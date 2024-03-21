// Given a five digit integer, print the sum of its digits.

#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("%d\n", sum);

    return 0;
}
