#include <stdio.h>
#include <stdbool.h>

#define MAXLINE 1024

int getLine(char line[], int lim);
void copy(char to[], char from[]);
void strip(char line[]);
void reverse(char s[]);

int main() {
    int i;
    int len = 0;
    char line[MAXLINE];
    while ((len = getLine(line, MAXLINE)) > 0) {
        reverse(line);
        printf("%s\n", line);
    }
    return 0;
}

int getLine(char line[], int lim) {
    int c, i;
    
    for (i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != EOF)
        ++i;
}

void strip(char line[]) {
    int i;
    bool isSpace;
    
    i = 0;
    for (i = 0; line[i] != '\0'; ++i) {
        if (line[i] == ' ' || line[i] == '\t') {
            if (!isSpace) {
                putchar(' ');
                isSpace = true;
            }
        } else {
            putchar(line[i]);
            isSpace = false;
        }
    }
}

void reverse(char s[]) {
    int i, len, halfLen;
    // Узнать длину строки
    for (len = 0; s[len] != '\0'; ++len);
    halfLen = len /2;
    // поменять местами символы относительно середины
    for (i = 0; i < halfLen; i++) {
        char temp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = temp;
    }
}