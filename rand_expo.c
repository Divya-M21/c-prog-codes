#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    srand(time(NULL));
    double lambda = 2.0; // Rate parameter
    double randomNumber = -log((double)rand() / RAND_MAX) / lambda;
    printf("Random Number with Exponential Distribution: %.2f\n", randomNumber);
    return 0;
}
