#include "ieee.hpp"
 
 /**
  * get_exp - A funcion that gets the exponent part of IEEE format
  * @num: The number
  * @num_format: The array to store the IEEE format
  * @precision: 0 (single-presition 32-bits) ,or (1 double-presicion 64-bits)
  * 
  * Return: Nothing
  */
void get_exp(unsigned int num, unsigned int *num_format, unsigned int precision)
{
    unsigned int i, exp, increase, exp_len, exp_max;

    if (precision == 0)
    {
        increase = 127;
        exp_len = 8;
        exp_max = 255;
    }
    else
    {
        increase = 1023;
        exp_len = 11;
        exp_max = 2047;
    }
    exp = increase + binary_length(num) - 1;

    if (exp > exp_max)
    {
        cout << "Error: Overflow" << endl;
        exit(99);
    }
    else if (exp == exp_max)
    {
        cout << "+/- infinite" << endl;
        exit(0);
    }

    for (i = exp_len; i > 0; i--)
    {
        num_format[i] = exp % 2;
        exp /= 2;
    }
}
