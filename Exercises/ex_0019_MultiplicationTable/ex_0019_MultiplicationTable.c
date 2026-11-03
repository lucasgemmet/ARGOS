// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0019_MultiplicationTable.h"

// Function definitions
// TODO: implement ex_0019_Read and ex_0019_MultiplicationTable
int ex_0019_Read(int min,int max)
{
    int status = 0;
    const int nbExpectedValues = 1;
    int x = 0;
    do
    {
        printf("Please enter the multiplication table (in [%d..%d]): ",min,max);
        status = scanf("%d", &x);

        {
            int c;
            do
            {
                c = getchar();
            } while (c != '\n' && c != EOF);
        }
    } while ((status != nbExpectedValues && status != EOF) || !( x>=min && x<=max));
    return x;
}

void ex_0019_MultiplicationTable(int n)
{
    printf("\nMULTIPLICATION TABLE FOR %d\n",n);
    for(int i = 1;i<=10;++i)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }
}