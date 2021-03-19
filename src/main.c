#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
#include "debug.h"
#include "utils.h"
#include "lexer.h"

int main(int argc, char** argv) {
    if (argc < 3) {
        format_error("troppi pochi argomenti:\n    la struttura e' \"tln compila <nome del file>\"\n");
        return EXIT_FAILURE;
    }
    if (strcmp(argv[1], "compila") != 0) {
        format_error("comando sconosciuto, intendevi \"compila\"?");
        return EXIT_FAILURE;
    }
    char* file_name = argv[2];
    char* code = load_file(file_name);

    lex(code, get_file_size(file_name));

    return EXIT_SUCCESS;
}
