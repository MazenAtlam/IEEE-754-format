#include "ieee.hpp"

/**
 * get_mantissa - A function that gets the mantissa part of IEEE format
 * @num: The fraction part of the number
 * @num_format: A The array to store the IEEE format
 * @precision: 0 (single-precision 32-bits), or 1 (double-precision 64-bits)
 *
 * Return: Nothing
*/
void get_mantissa(float num, unsigned int *num_format, unsigned int precision)
{
    float fraction;
    unsigned int i, mantissa_start, mantissa_end, i_num, bi_len, bit;

    i_num = int(num);
    fraction = num - i_num;
    bi_len = binary_length(i_num);

    if (precision == 0)
    {
        mantissa_start = 9;
        mantissa_end = 31;
    }
    else
    {
        mantissa_start = 12;
        mantissa_end = 63;
    }
    
    for (i = mantissa_start + bi_len - 2; i >= mantissa_start; i--)
    {
        num_format[i] = i_num % 2;
        i_num /= 2;
    }

    for (i = mantissa_start + bi_len - 1; i <= mantissa_end; i++)
    {
        fraction *= 2;
        bit = int(fraction);
        num_format[i] = bit;
        fraction -= bit;
    }
}
