#include "ieee.hpp"

/**
 * main - Entry point
 * 
 * Description: A program to compute the IEEE 754 format for a number
 * 
 * Return: 0 (success), or non-zero value (failure)
*/
int main(void)
{
	float num;
    unsigned int precision, num_format[64];

    cout << "Enter a floating number: ";
    cin >> num;

    do
    {
        cout << "Choise a number 0 or 1" << endl;
        cout << "0 for single-precision and 1 for double-precision" << endl;
        cin >> precision;
    } while (precision != 0 && precision != 1);

    if (num < 0)
    {
        num *= -1;
        num_format[0] = 1;
    }
    else
    {
        num_format[0] = 0;
    }

    get_exp(int(num), num_format, precision);
    get_mantissa(num, num_format, precision);
    print_IEEE(num_format, precision);

    return (0);
}
