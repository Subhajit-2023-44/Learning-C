// Alice and Marks
// Alice has scored X marks in her test and Bob has scored Y marks in the same test. Alice is happy if she scored at least twice the marks of Bob’s score. Determine whether she is happy or not.

#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    if (x < 1 || x > 100 || y < 1 || y > 100) {
        printf("Invalid input. Please enter a number between 1 and 100 for both X and Y.\n");
        return 1;
    }

    if (2*y <= x) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
