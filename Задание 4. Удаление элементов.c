//Пример №1
//Данные на входе: aa ss dd ff gg hh jj kk ll.
//Данные на выходе: aa dd gg jj ll

//Пример №2
//Данные на входе: aa ss dd ff gg hh jj kk ll tt.
//Данные на выходе: aa dd gg jj ll

#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char input[MAX_LEN];
    char *words[MAX_LEN];
    int count = 0;

    printf("Введите список слов: ");
    fgets(input, MAX_LEN, stdin);

    input[strcspn(input, "\n")] = '\0';

    char *token = strtok(input, " ");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    printf("Результат: ");
    for (int i = 0; i < count; i += 2) {
        printf("%s ", words[i]);
    }
    printf("\n");

    return 0;
}
