#include <stdio.h>

#define MAX_TEMP 300
#define MIN_TEMP -300
#define STEP 20

float FtoC(int fahr);

int main(){
    int fahr;
    for (fahr = MIN_TEMP; fahr <= MAX_TEMP; fahr += STEP) {
        printf("Фаренгейты: %4d Цельсии: %6.1f\n", fahr, FtoC(fahr));
    }
    return 0;
}

float FtoC(int fahr){
    return 5.0/9.0 * (fahr - 32.0);
}