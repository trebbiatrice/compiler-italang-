#include "debug.h"

void format_error(char* error) {
    char* error_msg = "\nitalang output:";
    printf("%s\n    %s\n", error_msg, error);
}
