#include <stdio.h>

#define MAXLINE 4

int getLine(char line[], int lim);
void copy(char to[], char from[]);

/* Печать самой длинной строки */
int main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    max = 0;
    while ((len = getLine(line, MAXLINE)) > 0){
        if (line[len - 1] != '\n'){
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {
                ++len;
            }
        }
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {
        printf("Лимит строки: %d\nСтрока: %s\nДлина строки: %d\n", MAXLINE, longest, max);
    }
    return 0;
}

int getLine(char s[], int lim){
    int c, i;
    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]){
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}