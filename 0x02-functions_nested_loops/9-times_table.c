#include "main.h"
/**
* print_alphabet_x10b-function that will print the alphabet 10 times
*
*/
void times_table(void)
{
int num, mult, prod;
for (num = 0; num <= 9; num++)
{
_putchar(48);
for (mult = 1; mult <= 9; mult++)
{
_putchar(',');
_putchar(' ')'
prod = num * mult;
/*
* put space if product is a single number
* place the first digit if it is two numbers
*/
if (prod <= 9)
_putchar(' ');
else
_putchar((prod / 10) + 48);
_putchar((prod % 10) + 48);
}
_putchar('\n');
}
}
