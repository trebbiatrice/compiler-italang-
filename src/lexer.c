#include "lexer.h"

void lex(char* code, size_t size) {
    char array[size];
    for (int i = 0; i < size; i++) {
        array[i] = code[i];
        printf("%c\n", array[i]);
    }
}
