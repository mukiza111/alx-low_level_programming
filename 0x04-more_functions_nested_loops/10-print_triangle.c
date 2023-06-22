#include "main.h"

/**
* void print_triangle - print a diagonal line 
* @n: is a number of times the \ character shouls do be printed
*
*/
void print_triangle(int size)
{
int high, base;
if (size <= 0)
_putchar('\n');
else
{
for (high = 1; high <= size; high++)
{
for (base = 1; base <= size; base++)
{
if ((high + base) <= size)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
}
