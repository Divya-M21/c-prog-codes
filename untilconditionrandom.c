#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int randomNumber;
    do {
        randomNumber = rand();
        printf("Random Number: %d\n", randomNumber);
    } while (randomNumber % 2 != 0); // Continue until even number generated
    return 0;
}
