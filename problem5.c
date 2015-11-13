#include <stdio.h>

#define min_bound 1
#define max_bound 20

int main() {
    int currentNumber = 0;
    int flag = 0;


    while(flag == 0) {
        currentNumber++;

        int i;
        for(i = min_bound; i <= max_bound; i++) {
            if (currentNumber % i == 0) {
                flag = 1;
            } else {
                flag = 0;
                break;
            }
        }
    }

    printf("Smallest Multiple\n");
    printf("The smallest positive number that is evenly divisible by all numbers from %d to %d is: %d\n", min_bound, max_bound, currentNumber);

    return 0;
}
