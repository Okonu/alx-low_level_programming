#include "main.h"

/**
* swap_int - a function that swaps the values of two integers
*@a: value to be evaluated
*@b: value to eveluated
*Return: not.
*/

void swap_int(int *a, int *b)

{
	int n = *a;
	*a = *b;
	*b = n;
}
