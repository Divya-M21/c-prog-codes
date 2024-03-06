#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int n = 5;
    int sum = 0;
    int i;
    for (i = 0; i < n; ++i) {
        int randomNumber = rand();
        printf("Random Number %d: %d\n", i+1, randomNumber);
        sum += randomNumber;
    }
    printf("Sum of Random Numbers: %d\n", sum);
    return 0;
}
