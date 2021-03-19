#ifndef UTILS_H
#define UTILS_H

#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

#include "debug.h"

long int get_file_size(const char* file_name);
char* load_file(char const* path);

#endif
