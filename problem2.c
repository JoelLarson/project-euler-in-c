#include <stdio.h>

int main() {
    int previous = 1;
    int current = 1;

    int total = 0;
    int n;

    while(current < 4000000) {
        n = previous + current;
        previous = current;
        current = n;

        if (n % 2 == 0) {
            total += n;
        }
    }

    printf("Even Fibonacci Numbers\n");
    printf("The sum of the even-valued terms of fibonacci below 4 million: %d\n", total);
}
