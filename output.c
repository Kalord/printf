#include "output.h"

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

/**
 * Помещение данных в поток вывода stdout
 **/
void iprintf(char* format, ...)
{
    char param;
    char buffer[BUFFER_SIZE];
    va_list arg;
    va_start(arg, format);

    for(u_int32_t i = 0; i < strlen(format); i++)
    {
        if(format[i] == '%')
        {
            i++;
            param = format[i];

            //char
            if(param == 'c')
            {
                putchar(va_arg(arg, int));
                continue;
            }
            //integer
            if(param == 'd')
            {
                int number = va_arg(arg, int);
                intToString(number, buffer);
                iputs(buffer);
                continue;
            }
            //string
            if(param == 's')
            {
                iputs(va_arg(arg,char *));
                continue;
            }
        }
        putchar(format[i]);
    }

    va_end(arg);
}