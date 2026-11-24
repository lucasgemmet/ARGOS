// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0024_PrintArray.h"

// Function definitions
// TODO: implement ex_0024_PrintArray
void ex_0024_PrintArray(int array[],int size)
{
    if(size == 0)
    {

    }else
    {    
        for(int i = 0;i<size-1;++i)
        {
            printf("%d ",array[i]);
        }
        printf("%d",array[size-1]);
    }
}