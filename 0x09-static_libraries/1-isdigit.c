#include "main.h"
/**
 *_isdigit - checks for digits
 *@c: parameter
 *Return: returns 1 if digit ,0 if else
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
