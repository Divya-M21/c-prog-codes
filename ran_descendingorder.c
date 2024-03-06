#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int i;
    for ( i = 10; i >= 1; --i) {
        int randomNumber = rand() % 100;
        printf("Random Number %d: %d\n", 11 - i, randomNumber);
    }
    return 0;
}
