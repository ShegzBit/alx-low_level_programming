#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include<string.h>

void _putchar(char);
void _puts_recursion(char *s);
void recursion_ass(char *s, int num);
void _print_rev_recursion(char *s);
void rev_ass(char *, int);
int _strlen_recursion(char *s);
int strlen_ass(char *, int);
int factorial(int n);
int _pow_recursion(int x, int y);
int pow_ass(int, int, int);
int _sqrt_recursion(int n);
int sqrt_helper(int, int);
int is_prime_number(int n);
int prime_helper(int, int);
int is_palindrome(char *s);
char *revstr(char *str, char *rev, int len, int i);
int wildcmp(char *s1, char *s2);


#endif