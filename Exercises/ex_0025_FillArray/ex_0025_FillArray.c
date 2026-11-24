// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0025_FillArray.h"

// Function definitions
// TODO: implement ex_0025_FillArray
int ex_0025_FillArray(int array[],int maxCapacity)
{
    int count = 0;

    if(maxCapacity==0 || maxCapacity<0)
    {
        return 0;
    }else
    {
        for(int i = 0; i<maxCapacity;++i)
        {
            
            int status = 0;
            const int nbExpectedValues = 1;
            int x = 0;
            do
            {
            status = scanf("%d", &x);

            {
                int c;
                do
                {
                c = getchar();
                } while (c != '\n' && c != EOF);
            }
            } while (status != nbExpectedValues && status != EOF);
            if(status == EOF)
            {
                return count;
            }
            if(x<0)
            {
                return count;
            }
            array[i]= x;
            count++;
        }
        return count;
    }
}