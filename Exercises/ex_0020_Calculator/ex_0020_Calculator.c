// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0020_Calculator.h"

// Function definitions
// TODO: implement ex_0020_Calculator
double ex_0020_Calculator(double num1,double num2,char operateur)
{
    if(operateur == '+')
    {
        return num1 + num2;
    }
    if(operateur=='-')
    {
        return num1-num2;
    }
    if(operateur=='*')
    {
        return num1*num2;
    }
    if(operateur=='/')
    {
        if(num2==0)
        {
            return 0;
        }else{
            return num1/num2;
        }
    }
    return 0;
}