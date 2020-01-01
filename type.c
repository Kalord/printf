#include "type.h"

/**
 * Конвертирование целого числа в строку
 **/
void intToString(size_t number, char* buffer)
{
    sprintf(buffer, "%ld", number);
}