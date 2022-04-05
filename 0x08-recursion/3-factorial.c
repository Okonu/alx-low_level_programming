#include "main.h"
/**
*factorial(int n)- returns the factorial of a given number.
*@n:given number
*Return:factorial
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
<<<<<<< HEAD
	}	
	return (n * factorial(n - 1));
=======
	}
	return (n*factorial(n-1));
>>>>>>> f7f859f14bb6059a5a16568d114ba4faf9f7b0a3

}
