#include "main.h"

/**
* print_square - print a diagonal line 
* @n: is a number of times the \ character shouls do be printed
*
*/
void print_square(int size)
{
int row, column;
for(row = 1; row <= size; row++)
{
for (column = 1; column <= size; column++)
_putchar('#');
_putchar('\n');
}
}
