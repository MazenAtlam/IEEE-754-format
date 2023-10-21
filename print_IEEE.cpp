#include "ieee.hpp"

/**
 * print_IEEE - A function that prints the IEEE 754 format
 * @num_format: The array to store the IEEE format
 * @precision: 0 (single-precision 32-bits), or 1 (double-precision 64-bits)
 * 
 * Return: Nothing
*/
void print_IEEE(unsigned int *num_format, unsigned int precision)
{
    unsigned int i;

    if (precision == 0)
    {
        cout << "IEEE 754 Representation (Single-Precision):" << endl;
        cout << "Sign Bit: ";
        cout << num_format[0] << endl;
        cout << "Exponent: ";
        for (i = 1; i <= 8; i++)
        {
            cout << num_format[i];
        }
        cout << endl;
        cout << "Mantissa: ";
        for (i = 9; i < 32; i++)
        {
            cout << num_format[i];
        }
        cout << endl;
    }
    else
    {
        cout << "IEEE 754 Representation (Double-Precision):" << endl;
        cout << "Sign Bit: ";
        cout << num_format[0] << endl;
        cout << "Exponent: ";
        for (i = 1; i <= 11; i++)
        {
            cout << num_format[i];
        }
        cout << endl;
        cout << "Mantissa: ";
        for (i = 12; i < 64; i++)
        {
            cout << num_format[i];
        }
        cout << endl;
    }
}
