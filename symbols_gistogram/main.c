#include <stdio.h>

#define DIGITS 10
#define ALPHABET 26

int main() {
    int digits[DIGITS], lowerAlphabet[ALPHABET], upperAlphabet[ALPHABET];
    int i, c;
    for (i = 0; i < DIGITS; i++){
        digits[i] = 0;
    }
    for (i = 0; i < ALPHABET; i++){
        lowerAlphabet[i] = 0;
        upperAlphabet[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            ++digits[c - '0'];
        }
        if (c >= 'a' && c <='z') {
            ++lowerAlphabet[c - 'a'];
        }
        if (c >= 'A' && c <= 'Z') {
            ++upperAlphabet[c - 'A'];
        }
    }
    printf("Гистограмма символов\n");
    printf("Цифры:\n");
    for (i = 0; i < DIGITS; i++) {
        printf("%c", i + '0');
        for (int j = 0; j < digits[i]; j++){
            printf("=");
        }
        printf("\n");
    }
    printf("Маленькие буквы:\n");
    for (i = 0; i < ALPHABET; i++) {
        printf("%c", i + 'a');
        for (int j = 0; j < lowerAlphabet[i]/10; j++){
            printf("=");
        }
        printf("\n");
    }
    printf("Большие буквы:\n");
    for (i = 0; i < ALPHABET; i++){
        printf("%c", i + 'A');
        for (int j = 0; j < upperAlphabet[i]; j++){
            printf("=");
        }
        printf("\n");
    }
    return 0;
}