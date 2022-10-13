0x10. C - Variadic functions



0) 0-sum_them_all.c is a function that returns the sum of all its parameters.
Prototype: int sum_them_all(const unsigned int n, ...);
If n == 0, return 0

1) The 1-print_numbers.c is a function that prints numbers, followed by a newline.
Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
If separator is NULL, don’t print it

2) The 2-print_strings.c is a function that prints strings, followed by a newline.
Prototype: void print_strings(const char *separator, const unsigned int n, ...);

3) The 3-print_all.c file is a function that prints anything.

Prototype: void print_all(const char * const format, ...);
where format is a list of argument types passed to the function
c: character
I: whole
f: float
s: char * (if string is NULL, print (nil) instead
any other character should be ignored
see example
You are not allowed to use for, goto, ternary, else, do... operator while
You can use the maximum
2 while loops
2 if
You can declare a maximum of 9 variables
You are allowed to use printf
Print a new line at the end of your function




The prototypes of all functions and the prototype of the _putchar function is included in the header file called variadic_functions.h

