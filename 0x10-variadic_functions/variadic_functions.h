#ifndef _VAR_FUNC_H_
#define _VAR_FUNC_H_

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif
