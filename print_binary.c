#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to be printed in binary
 * @printed: hold the number of characters printed
 */

void print_binary(unsigned int n, unsigned int *printed)
{
	int *printed=0,rem,f=1;
	while(n != 0){
		rem = n % 2;
		*printed = *printed + rem * f;
		f = f * 10;
		n = n / 2;
	}
	return *printed;
}
