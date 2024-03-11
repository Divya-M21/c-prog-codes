#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10

int main() {
    int array[10];
    int i;

    srand(time(NULL));


    for (i = 0; i < 10; i++) {
        array[i] = rand() % 10;
    }
    printf("Random Numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
