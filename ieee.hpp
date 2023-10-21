#ifndef IEEE_H
#define IEEE_H

using namespace std;

/*__libraries__*/

#include <iostream>

/*__functions' prototypes__*/

void get_exp(unsigned int num, unsigned int *num_format, unsigned int precision);
unsigned int binary_length(unsigned int n);
void get_mantissa(float num, unsigned int *num_format, unsigned int precision);
void print_IEEE(unsigned int *num_format, unsigned int precision);

#endif /*_ieee.h_*/
