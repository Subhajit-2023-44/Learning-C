// In this challenge, you will use logical bitwise operators. All data is stored in its binary representation. The logical operators, and C language, use  to represent true and  to represent false. The logical operators compare bits in two numbers and return true or false,  or , for each bit compared.

// Bitwise AND operator & The output of bitwise AND is 1 if the corresponding bits of two operands is 1. If either bit of an operand is 0, the result of corresponding bit is evaluated to 0. It is denoted by &.

// Bitwise OR operator | The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1. It is denoted by |.

// Bitwise XOR (exclusive OR) operator ^ The result of bitwise XOR operator is 1 if the corresponding bits of two operands are opposite. It is denoted by .

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
    int i, j, M1 = 0, M2 = 0, M3 = 0;
    for (i = 1; i <= n; i++) {
        for (j = i + 1; j <= n; j++) {
            int and = i & j;
            int or = i | j;
            int xor = i ^ j;

            if (and < k && M1 < and)
                M1 = and;
            if (or < k && M2 < or)
                M2 = or;
            if (xor < k && M3 < xor)
                M3 = xor;
        }
    }
    printf("%d\n", M1);
    printf("%d\n", M2);
    printf("%d\n", M3);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
