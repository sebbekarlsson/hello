#include "include/io.h"
#include <stdlib.h>
#include <stdio.h>

char* get_file_contents(const char* filepath)
{
    char* buffer = NULL;
    long length;

    FILE* f = fopen(filepath, "rb");

    if (f)
    {
        fseek(f, 0, SEEK_END);
        length = ftell(f);
        fseek(f, 0, SEEK_SET);

        buffer = calloc(length, sizeof(char));

        if (buffer)
            fread(buffer, sizeof(char), length, f);

        fclose(f);
        return buffer;
    }

    printf("Error reading file %s\n", filepath);
    exit(2);
}
