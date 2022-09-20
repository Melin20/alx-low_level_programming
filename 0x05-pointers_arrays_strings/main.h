#ifndef _MAIN_
#define _MAIN_

/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */

int _putchar(char c);

/**
 * reset_to_98 - resets variable to 98
 * @n: variable with pointer
 */

void reset_to_98(int *n);

/**
 * swap_int - swaps integer values
 * @a: first integer
 * @b: second integer
*/

void swap_int(int *a, int *b);

/**
 * _strlen - length of string
 * @s: string
 * Return: returns length
 */

int _strlen(char *s);

/**
 * _puts - prints something with new line
 * @str: string to put
 */

void _puts(char *str);

/**
 * _rev - reverse a string
 * @s: string to reverse
 */

void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);

#endif
