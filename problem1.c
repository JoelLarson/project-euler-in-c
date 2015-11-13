#include <stdio.h>

int main() {
    int max_number = 1000;

    int total = 0;

    int i;

    for(i = 0; i < max_number; i++) {
        if ((i % 3) == 0 || (i % 5) == 0) {
            total = total + i;
        }
    }

    printf("Multiples of 3 and 5\n");
    printf("The sum of all multiples of 3 or 5 below %d is: %d\n", max_number, total);
}
