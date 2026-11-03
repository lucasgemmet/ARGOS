// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <stdbool.h>

// Local includes
#include "ex_0018_Squares.h"

// Function definitions
// TODO: implement ex_0018_Square and ex_0018_Squares
int ex_0018_Square(int n)
{   
    return n*n;

    
}
bool ex_0018_Squares(int n)
{
    if(n<1||n>1000)
    {
        return false;
    }
    else
    {
        for(int i = 1;i<=n;++i)
        {
            printf("%d ",ex_0018_Square(i));
        }
        printf("\n");
        return true;
    }
}