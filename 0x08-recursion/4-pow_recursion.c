
#include "main.h"

/**
 * _pow_recursion - calculate the  value of x raised to the power of y
 *
 * @x: integer to calculate power of it
 * @y: the power
 *
 * Return:  value of x raised to the power of y
 */

int _pow_recursion(int x, int y)

{
if (y == 1)
{
return (x);
}
y--;
return (x * (_pow_recursion(x, y)));
}
