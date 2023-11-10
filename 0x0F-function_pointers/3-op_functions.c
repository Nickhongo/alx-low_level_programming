#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - adds two numbers
 * @a: input a
 * @b: input b
 * Return: returns addition
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - subtracts two numbers
 *@a: input a
 *@b: input b
 *Return: returns substraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - multiplies two numbers
 *@a: input a
 *@b: input b
 *Return: returns multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - divides two numbers
 *@a: input a
 *@b: input b
 *Return: returns division
 */

int op_div(int a, int b)
{
	return (a / b);
}
/**
 *op_mod - remainders two numbers
 *@a: input a
 *@b: input b
 *Return: returns modulo
 */

int op_mod(int a, int b)
{
	return (a % b);
}
