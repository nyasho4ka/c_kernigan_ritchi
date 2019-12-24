#include <stdio.h>

#define maxWordLen 25
// Программа для вывода гистограммы длин слов в тексте
int main() {
    // объявляем массив с количеством элеметов равным максимальной длине слова
    int i = 0;
    int elements[maxWordLen];
    for (i = 0; i < maxWordLen; ++i){
        elements[i] = 0;
    }
    // объявляем счетчик длины слова
    int wordLen = 0;
    // следующий символ строки
    int c;
    // считываем символы из потока вывода пока нет конца файла
    while ((c = getchar()) != EOF) {
        // если символ не равен символу разрыва, табуляции или переноса строки
        if (c != ' ' && c != '\n' && c != '\t'){
            ++wordLen;
        }
        // иначе
        else if (wordLen != 0) {
            // инкрементируем соответствующую позицию массива
            ++elements[wordLen];
            // обнуляем счётчик
            wordLen = 0;
        }
    }
    printf("Гистограмма частот слов\n");
    for (i = 1; i < maxWordLen; ++i) {
        printf("Длина: %2d ", i);
        for (int j = 0; j < elements[i]; j++){
            printf("o");
        }
        printf("\n");
    } 
    return 0;
}