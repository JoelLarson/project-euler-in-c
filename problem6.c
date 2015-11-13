#include <stdio.h>
#include <math.h>

int sumOfSquares(int start, int end);
int squareOfSums(int start, int end);

int main() {
    int sum = sumOfSquares(0, 100);
    int square = squareOfSums(0, 100);

    printf("Sum Square Difference\n");
    printf("The difference between the problems is: %d\n", square - sum);

    return 0;
}

int sumOfSquares(int start, int end) {
    int buffer = 0;

    int i;
    for(i = start; i <= end; i++) {
        buffer += pow(i, 2);
    }

    return buffer;
}

int squareOfSums(int start, int end) {
    int buffer = 0;

    int i;
    for(i = start; i <= end; i++) {
        buffer += i;
    }

    return pow(buffer, 2);
}
