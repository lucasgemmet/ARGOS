// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0008_ScanfPrintf.h"

// Function definitions
void ex_0008_ScanfPrintf(void)
{
  // TODO: read 3 letters with scanf, then print their ASCII codes
    char a = 0;
    char b = 0;
    char c = 0;
    printf("\n\nPlease enter 3 letters:");
    scanf(" %c %c %c",&a,&b,&c);
    printf("\n\nHere are the corresponding ASCII codes:\n"
            "%c--------->%d\n"
            "%c--------->%d\n"
            "%c--------->%d\n",a,a,b,b,c,c);
}
