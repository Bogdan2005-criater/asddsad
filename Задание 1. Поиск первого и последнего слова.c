//Пример №1
//Данные на входе: efg abcd zzz.
//Данные на выходе: efg zzz.

//Пример №2
//Данные на входе: fffff kkkkkk a.
//Данные на выходе: fffff a.


#include <stdio.h>
#include <string.h>
#define MAX_LEN 100

int main() {
    char input[MAX_LEN];
    char *firstWord, *lastWord;

    printf("Введите строку: ");
    fgets(input, MAX_LEN, stdin);

    input[strcspn(input, "\n")] = '\0';

    firstWord = strtok(input, " ");
    lastWord = firstWord;

    while (lastWord != NULL) {
        lastWord = strtok(NULL, " ");
        if (lastWord != NULL) {
            firstWord = lastWord;
        }
    }

    printf("Первое слово: %s\n", strtok(input, " "));
    printf("Последнее слово: %s\n", firstWord);

    return 0;
}
