#include <stdio.h>
#include <math.h>

int checkPalindrome(int x);
int reverseNumber(int x);

int main() {
    int largestNumber = 0;

    int x;
    int i;
    int j;
    for(i = 999; i > 100; i--) {
        for(j = 999; j > 100; j--) {
            x = i * j;

            if (checkPalindrome(x) == 1) {
                if (x > largestNumber) {
                    largestNumber = x;
                }
            }
        }
    }

    printf("%d", largestNumber);
}

int checkPalindrome(int x) {
    if (x != reverseNumber(x)) {
        return 0;
    }

    return 1;
}

int reverseNumber(int x) {
    int buffer = 0;
    int digit = 0;

    int placements = floor(log10(x)) + 1;

    int i;
    for(i = 0; i < placements; i++) {
        digit = (x - (floor(x / pow(10, i+1)) * pow(10, i+1) + digit)) / pow(10, i);
        buffer += digit * pow(10, placements - (i+1));
    }

    return buffer;
}
