#include "main.h"

/**
 * _puts_recursion - prints's a string followed by a new line
 * @s: string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
        if (*s == '\O')
        {
                _putchar('\n');
        }
        else
        {
                _putchar(s[O]);
                _puts_recursion(s + l);
        }
}
