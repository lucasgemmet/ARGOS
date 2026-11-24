// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0027_Array2DSum.h"

// Function definitions
// TODO: implement ex_0027_Array2DSum
void ex_0027_Array2DSum(void)
{
    int collumn_max = 0;
    int line_max = 0;
    int array[50][50];
    int status = 0;
    const int nbExpectedValues = 1;

    do
    {
    printf("Nb lines (max.50): ");
    status = scanf("%d", &line_max);

    {
        int c;
        do
        {
        c = getchar();
        } while (c != '\n' && c != EOF);
    }
    }while ((status != nbExpectedValues && status != EOF)||(line_max<0)||(line_max>50));
    status = 0;
    do
    {
    printf("Nb columns (max.50): ");
    status = scanf("%d", &collumn_max);

    {
        int c;
        do
        {
        c = getchar();
        } while (c != '\n' && c != EOF);
    }
    }while ((status != nbExpectedValues && status != EOF)||(collumn_max<0)||(collumn_max>50));
    status = 0;
    for(int i = 0; i<line_max;++i)
    {
        for(int j = 0;j<collumn_max;++j)
        {
            int x = 0;
            do
            {
            printf("array[%d][%d]: ",i,j);
            status = scanf("%d", &x);

            {
                int c;
                do
                {
                c = getchar();
                } while (c != '\n' && c != EOF);
            }
            } while ((status != nbExpectedValues && status != EOF));
            array[i][j]=x;
        }
    }


    int sum = 0;
    for(int i = 0; i<line_max;++i)
    {
        for(int j = 0;j<collumn_max;++j)
        {
           sum += array[i][j];
        }
    }
    printf("Total sum: %d\n",sum);
}