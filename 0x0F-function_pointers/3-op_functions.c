#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - displays sum of two numbers
 * @a: inputed first number
 * @b: inputed second number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - displays the subtraction of two numbers
 * @a: first inputed number
 * @b: second inputed number
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - displays the product of two numbers
 * @a: first inputed number
 * @b: second inputed number
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - diplsys the divison of two numbers
 * @a: first inputed number
 * @b: second inpued number
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - displays the remainder of the division of two numbers
 * @a: first inputed number
 * @b: second inputed number
 * Return: the remainder of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

