#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int n = 5;
    int max = 0;
    int i; // Declare loop variable before the loop
    for (i = 0; i < n; ++i) {
        int randomNumber = rand();
        printf("Random Number %d: %d\n", i+1, randomNumber);
        if (randomNumber > max) {
            max = randomNumber;
        }
    }
    printf("Maximum Random Number: %d\n", max);
    return 0;
}
