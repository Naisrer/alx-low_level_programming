#include "main.h"

/**
 * _abs - a program that computes absoulute vilue
 * @s: the absolute result of the program
 * Return: Always (success)
 */

int _abs(int s)
{
	if (s < 0)
		return (-s);
	else
		return (s);
}
