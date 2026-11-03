// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0012_DecreasingOutput.h"

// Function definitions
void ex_0012_DecreasingOutput(void)
{
  // TODO: read 3 integers separated by commas, then print them in decreasing order
  int number[3]={0};

    int status=0;
    do
    {
        printf("Please enter 3 integers separated by commas: ");
        status = scanf(" %d , %d , %d",&number[0],&number[1],&number[2]);
        if(status == EOF)
        {
            return;
        }
        int c;        //netoye le buffer 
        do
        {
          c = getchar();
        } while (c != '\n' && c != EOF);
    }while ((status != 3));


    while(!(number[0]>=number[1] && number[1]>=number[2]))//boucle jusque a ce sois decroissant 
    {   
        int c;
        if(number[0]<number[1])         
        {
            c = number[0];
            number[0]=number[1];
            number[1]=c;
        }else if(number[1]<number[2])
        {
            c = number[1];
            number[1]=number[2];
            number[2]=c;
        }
    }
    printf("The 3 integers sorted in decreasing order: %d, %d, %d\n",number[0],number[1],number[2]);
}
