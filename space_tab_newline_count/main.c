#include <stdio.h>

int main() {
    int tab, space, n = 0;
    int c;
    while ((c = getchar()) != EOF){
        if (c == '\n')
            ++n;
        if (c == '\t')
            ++tab;
        if (c == ' ')
            ++space;
    }
    printf("tabs: %d\nspaces: %d\nnewlines: %d\n", tab, space, n);
    return 0;
}