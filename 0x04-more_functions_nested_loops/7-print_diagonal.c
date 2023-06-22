#include "main.h"

/**
* print_diagonal - print a diagonal line 
* @n: is a number of times the \ character shouls do be printed
*
*/
void print_diagonal(int n)
{
int postn, space;
if (n <= 0)
_putcahr('\n');
else
{
for (postn = 1; postn <= n; postn++)
{
for (space = 1; space <= postn; space++)
_putchar(' ');
_putcahar(92); /* is equal to '/' char */
putcahar('\n');
}
}
}
