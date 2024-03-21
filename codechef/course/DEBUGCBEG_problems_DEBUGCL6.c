// There is a sample code present in IDE, which inputs two number and prints their division.
// If you run the code for a test case like 3 0 you will get the runtime error.
// To fix it, add an if condition which checks if the value of b is 0 and output infinity directly. Otherwise output the result of division.

#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    if (b == 0) {
        printf("infinity\n");
    } else {
        printf("%d\n", a / b);
    }
    
}
