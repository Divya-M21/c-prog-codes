#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int min = 1;
    int max = 100;
    int randomNumber = min + rand() % (max - min + 1);
    printf("Random Number between %d and %d: %d\n", min, max, randomNumber);
    return 0;
}
