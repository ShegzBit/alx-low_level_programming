#ifndef _VAR_FUNC_H_
#define _VAR_FUNC_H_

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_i(va_list ap);
void print_s(va_list ap);
void print_c(va_list ap);
void print_f(va_list ap);

typedef void (*prn)(va_list);

/**
 * struct op_t - struct op_t
 * @op: char
 * @type: type to handle with
 */
typedef struct op_t
{
	char op;
	prn func;

} op_t;


#endif
