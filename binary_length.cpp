#include "ieee.hpp"

/**
 * binary_length - A function that counts the bits in binary represent a number
 * @n: The number in decimal
 * 
 * Return: The length of the number in binary
*/
unsigned int binary_length(unsigned int n)
{
    unsigned int length = 0;

    if (n == 0)
        return (1);

    while (n != 0)
    {
        length++;
        n /= 2;
    }

    return (length);
}
