#include "utils.h"

long int get_file_size(const char* file_name) {
    struct stat st;

    if(stat(file_name,&st) == 0)
        return (st.st_size);
    else
        return -1;
}

char* load_file(char const* path)
{
    char* buffer = 0;
    long length;
    FILE* f = fopen(path, "rb");

    if (f) {
        fseek (f, 0, SEEK_END);
        length = ftell(f);
        fseek (f, 0, SEEK_SET);
        buffer = (char*)malloc ((length+1)*sizeof(char));
        fread (buffer, sizeof(char), length, f);
        fclose (f);
    } else {
        format_error("impossibile trovare e/o aprire file");
        return NULL;
    }
    buffer[length] = '\0';

    return buffer;
}
