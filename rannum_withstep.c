#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int step = 5;
    int randomNumber = (rand() % 10) * step; // Generates multiples of 5 between 0 and 45
    printf("Random Number with Step %d: %d\n", step, randomNumber);
    return 0;
}

