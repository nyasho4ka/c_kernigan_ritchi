#include <stdio.h>
#include <stdbool.h>

int main() {
    bool prevSpace = false;
    int c;
    while ((c = getchar()) != EOF) {
        if (c == ' '){
            if (prevSpace) {
                continue;
            } else {
                putchar(c);
                prevSpace = true;
            }
        } else {
            putchar(c);
            prevSpace = false;
        }
    }
    return 0;
}