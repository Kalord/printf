#pragma once

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <sys/types.h>

#include "type.h"

#define BUFFER_SIZE 128

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