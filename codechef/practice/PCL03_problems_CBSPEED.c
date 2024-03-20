// Chef and Brain Speed
// In ChefLand, human brain speed is measured in bits per second (bps). Chef has a threshold limit of X bits per second above which his calculations are prone to errors. If Chef is currently working at Y bits per second, is he prone to errors? 
// If Chef is prone to errors print YES, otherwise print NO.

#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    if (x < 1 || x > 100 || y < 1 || y > 100) {
        printf("Invalid input. Please enter a number between 1 and 100 for both X and Y.\n");
        return 1;
    }

    if (y > x) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
