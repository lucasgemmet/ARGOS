// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0030_Complex.h"

// Function definitions
// TODO: implement ex_0030_InputComplex, ex_0030_SumComplex, ex_0030_DiffComplex, ex_0030_PrintComplex and ex_0030_Complex
Complex ex_0030_InputComplex(void)
{
    int status = 0;
    const int nbExpectedValues = 3;
    Complex value = {0,0};
    char closing = 0;
    int extra = 0;
    do
    {
    printf("Please enter a complex number (r,i): ");
    status = scanf(" ( %lf , %lf %c", &value.real,&value.imaginary,&closing);//c doit etre egal a )
    //plus compliquer que d'habitude car il faut verifier que l'utilisateur a bien mis un ) a la fin de son input
    extra = 0;

    int c;
    do
    {
    c = getchar();
    if (c != '\n' && c != EOF && c != ' ' && c != '\t')  //verifier que  c ne sois pas sois un tab sois un espace sois un retour a la ligne
    {
        extra = 1;
    }
    } while (c != '\n' && c != EOF);

    
    } while (status != EOF && (status != nbExpectedValues || closing != ')' || extra));
    return value;
}

Complex ex_0030_SumComplex(Complex a, Complex b)
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

Complex ex_0030_DiffComplex(Complex a, Complex b)
{
    Complex diff;
    diff.real = a.real - b.real;
    diff.imaginary = a.imaginary - b.imaginary;
    return diff;
}
void ex_0030_PrintComplex(Complex a)
{
    printf("%.2f + %.2fi\n", a.real, a.imaginary);
}

void ex_0030_Complex(void)
{
    Complex value_a = ex_0030_InputComplex();
    Complex value_b = ex_0030_InputComplex();
    Complex sum = ex_0030_SumComplex(value_a,value_b);
    Complex diff = ex_0030_DiffComplex(value_a,value_b);
    printf("\nSum = ");
    ex_0030_PrintComplex(sum);
    printf("\nDiff = ");
    ex_0030_PrintComplex(diff);
}