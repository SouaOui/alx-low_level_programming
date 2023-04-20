#ifndef _FUNCTION_POINTERS_H
#define _FUNCTION_POINTERS_H

#include <stdio.h>

void f(char *name);
void print_name(char *name, void (*f)(char *));
void action(int x);
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
