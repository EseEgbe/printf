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
int get_flag(char s, flags_t *f);
int (*get_print(char s))(va_list, flags_t *);
int print_int(va_list l, flags_t *f);
int count_digit(int i);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f);
char *convert(unsigned long int num, int base, int lowercase);
int _puts(char *str);

#endif
