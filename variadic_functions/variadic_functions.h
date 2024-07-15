#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
typedef struct format_types{
  char *id;
  void (*func)(char *separator, va_list agrs);
} f;
int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const formant, ...);
void print_char(char *separator, va_list args);
void print_int(char *separator, va_list args);
void print_float(char *separator, va_list args);
void print_string(char *separator, va_list args);
#endif
