#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    float min = 1.0;
    float max = 10.0;
    float randomNumber = min + ((float)rand() / RAND_MAX) * (max - min);
    printf("Random Float Number between %.2f and %.2f: %.2f\n", min, max, randomNumber);
    return 0;
}
