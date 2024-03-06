#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int randomOdd = (rand() % 50) * 2 + 1; // Generates odd numbers between 1 and 99
    printf("Random Odd Number: %d\n", randomOdd);
    return 0;
}
