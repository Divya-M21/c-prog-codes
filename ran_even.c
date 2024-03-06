#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int randomEven = (rand() % 50) * 2; // Generates even numbers between 0 and 98
    printf("Random Even Number: %d\n", randomEven);
    return 0;
}
