#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int min = 10;
    int max = 20;
    int randomNumber = min + rand() % (max - min + 1);
    printf("Random Number between %d and %d: %d\n", min, max, randomNumber);
    return 0;
}
