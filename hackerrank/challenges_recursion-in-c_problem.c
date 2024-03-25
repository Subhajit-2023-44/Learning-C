// There is a series, , where the next term is the sum of pervious three terms. Given the first three terms of the series, , , and  respectively, you have to output the nth term of the series using recursion.
// Recursive method for calculating nth term is given below.

#include <stdio.h>

long fibonacci(int n, int a, int b, int c) {
    if (n == 1)
        return a;
    if (n == 2)
        return b;
    if (n == 3)
        return c;

    return fibonacci(n - 1, b, c, a + b + c);
}

int main() {
    int n, a, b, c;

    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);

    printf("%ld\n", fibonacci(n, a, b, c));

    return 0;
}
