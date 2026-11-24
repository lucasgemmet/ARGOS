// Author: HE-Arc

#ifndef EX_0030_COMPLEX_H
#define EX_0030_COMPLEX_H

// Standard includes

// Local includes

// Types
typedef struct 
{
    double real;
    double imaginary;
}Complex;

// Function prototypes
Complex ex_0030_InputComplex(void);
Complex ex_0030_SumComplex(Complex a, Complex b);
Complex ex_0030_DiffComplex(Complex a, Complex b);
void ex_0030_PrintComplex(Complex a);
void ex_0030_Complex(void);
#endif // EX_0030_COMPLEX_H
