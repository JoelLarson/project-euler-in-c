#include <stdio.h>

long long determineLargestPrime(long long problem);

int main() {
    long long problem = 600851475143;
    printf("Largest Prime Factor\n");
    printf("The largest prime factor of %lli is: %d", problem, determineLargestPrime(problem));
}

long long determineLargestPrime(long long problem) {
    long long i;
    for(i = 2; i < problem; i++) {
        if ((problem % i) == 0) {
            problem = problem / i;
            i = 2;
        }
    }

    return problem;
}
