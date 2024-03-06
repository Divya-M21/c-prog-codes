#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    char randomChar = 'a' + rand() % 26; // Generate random uppercase letter
    printf("Random Character: %c\n", randomChar);
    return 0;
}
