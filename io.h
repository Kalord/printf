#include <stdarg.h>

/**
 * Помещение символа в поток вывода stdout
 **/
void iputchar(int symbol);

/**
 * Помещение строки в поток вывода stdout
 **/
void iputs(const char* string);

/**
 * Помещение данных в поток вывода stdout
 **/
void iprintf(char* format, ...);