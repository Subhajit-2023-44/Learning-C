// Chef and Instant Noodles
// Chef has invented 1-minute Instant Noodles. As the name suggests, each packet takes exactly 1 minute to cook. Chef's restaurant has X stoves and only 1 packet can be cooked in a single stove at any minute.
// How many customers can Chef serve in Y minutes if each customer orders exactly 1 packet of noodles?

#include <stdio.h>

int main(void) {
    int X, Y;
    scanf("%d %d", &X, &Y);

    printf("%d\n", X * Y);

    return 0;
}
