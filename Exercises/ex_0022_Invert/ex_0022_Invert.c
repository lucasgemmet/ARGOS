// Author: HE-Arc
#include <stdio.h>
// Standard includes

// Local includes
#include "ex_0022_Invert.h"

// Function definitions
// TODO: implement ex_0022_Invert
int ex_0022_Invert(int num)
{
    int nombre=0;
    int nombre_rev=0;
    if(num<0)
    {
        return -1;
    }
    while(num>0)
    {  
        nombre = num%10;
        nombre_rev *=10;
        nombre_rev+=nombre;  
        num /=10;        
    }
    
    printf("\n");
    printf("%d",nombre_rev);
    return nombre_rev;

}