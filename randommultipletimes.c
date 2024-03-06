#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int i;
    for (i = 0; i < 5; ++i) {
        int randomNumber = rand();
        printf("Random Number %d: %d\n", i+1, randomNumber);
    }
    return 0;
}
