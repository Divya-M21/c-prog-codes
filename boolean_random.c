
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Seed the random number generator
    int randomBoolean = rand() % 2; // Generate 0 or 1
    printf("Random Boolean: %d\n", randomBoolean);
    return 0;
}
