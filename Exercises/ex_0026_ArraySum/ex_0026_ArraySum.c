// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0026_ArraySum.h"

// Function definitions
// TODO: implement ex_0026_ArraySum
void ex_0026_ArraySum(void)
{
    int array[50];
    int sum=0;
    int status = 0;
    const int nbExpectedValues = 1;
    int nbr = 0;
    do
    {
    printf("Nb values (max.50): ");
    status = scanf("%d", &nbr);

    {
        int c;
        do
        {
        c = getchar();
        } while (c != '\n' && c != EOF);
    }
    } while ((status != nbExpectedValues && status != EOF) || (nbr < 0)|| (nbr > 50));
    for(int i = 0;i<nbr;++i)
    {
        int status = 0;
        const int nbExpectedValues = 1;
        int x = 0;
        do
        {
        printf("Value %d? ",i);
        status = scanf("%d", &x);

        {
            int c;
            do
            {
            c = getchar();
            } while (c != '\n' && c != EOF);
        }
        } while (status != nbExpectedValues && status != EOF);
        array[i]=x;
        sum+=array[i];
        
    }
    printf("array:\n");
    for(int i = 0;i<nbr;++i)
    {
        printf("%d",array[i]);
        if(i==nbr-1)
        {
            printf("");
        }else
        {
            printf(" ");
        }
    }
    printf("\nTotal sum: %d\n",sum);
}