#include <stdio.h>
#include "io.h"

/**
 * Помещение символа в поток вывода stdout
 **/
void iputchar(int symbol)
{
    fputc(symbol, stdout);
}

/**
 * Помещение строки в поток вывода stdout
 **/
void iputs(const char* string)
{
    fputs(string, stdout);
}