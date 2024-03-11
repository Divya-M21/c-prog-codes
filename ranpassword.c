#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 4

int main() {
    srand(time(NULL));
    char password[LENGTH + 1];
    const char charset[] = "abcdefghijk";
    int i;
    for (i = 0; i < LENGTH; i++) {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }
    password[LENGTH] = '\0';
    printf("Random password: %s\n", password);
    return 0;
}
