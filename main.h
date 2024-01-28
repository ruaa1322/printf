#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
/**
 * struct match - structure for containing functions and when to call them
 * @id: First member
 * @f: Second member
 *
 * Description: -
 */
typedef struct match
{
	char *id;
	int (*f)(va_list);
} match;
int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);

#endif
