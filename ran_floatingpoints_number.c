#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    float randomNumber = ((float)rand() / RAND_MAX) * 10.0; // Generate between 0 and 10
    printf("Random Float Number: %.2f\n", randomNumber);
    return 0;
}
