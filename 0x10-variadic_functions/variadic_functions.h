#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTION_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
/**
 * struct bb - pointer
 * @x: arg
 * @y: arg1
 */
typedef struct bb
{
	char *x;
	void (*y)();
} aa;
void print_i(va_list ls);
void print_c(va_list ls);
void print_f(va_list ls);
void print_cc(va_list ls);
/**
 * Declarations
 */
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
