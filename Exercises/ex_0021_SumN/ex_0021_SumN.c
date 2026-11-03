// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0021_SumN.h"

// Function definitions
// TODO: implement ex_0021_SumN
int ex_0021_SumN(int num1,int num2)
{
    int somme =0;

    if(num1>num2)
    {
        while(num2<=num1)
        {
            somme+=num2++;
        }
    }else{
        while(num1<=num2)
        {
            somme+=num1++;
        }
    }

    return somme;
}