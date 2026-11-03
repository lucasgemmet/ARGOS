// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0011_MultiplicationSign.h"

// Function definitions
void ex_0011_MultiplicationSign(void)
{
  // TODO: read 2 integers, then print the sign of their product without computing it
    
    int number_1 = 0;
    int number_2 = 0;
    int status=0;
    do
    {
        printf("Please enter 2 integers: ");
        status = scanf(" %d %d",&number_1,&number_2);
        if(status == EOF)
        {
            return;
        }
        int c;        //netoye le buffer 
        do
        {
          c = getchar();
        } while (c != '\n' && c != EOF);
    }while ((status != 2));
    if(number_1 * number_2== 0)
    {
        printf("%d * %d = 0\n",number_1,number_2);

    }else if(number_1 * number_2>0)
    {
        printf("%d * %d > 0\n",number_1,number_2);

    }else if(number_1 * number_2<0)
    {
        printf("%d * %d < 0\n",number_1,number_2);
    }
}
