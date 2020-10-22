#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function to add two integers
 * @a: first integer
 * @b: second integer
 * Return: Sum of two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to return difference of two numbers
 * @a: first integer
 * @b: second integer
 * Return: Difference of two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to add two integers
 * @a: first integer
 * @b: second integer
 * Return: product of both integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to return quotient of two numbers
 * @a: first number
 * @b: second number
 * Return: Quotient of a divided by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function to find remainder of two numbers
 * @a: first number
 * @b: second number
 * Return: Remainder of two numbers
 */

int op_mod(int a, int b)
{
	return (a % b);
}
