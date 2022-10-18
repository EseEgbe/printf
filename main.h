#ifndef main_h
#define main_h

#include <stdlib.h>
#include <stdarg.h>

typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;

int _putchar(char c);
int _printf(const char *format, ...);

#endif
