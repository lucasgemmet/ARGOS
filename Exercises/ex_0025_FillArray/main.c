// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0025_FillArray.h"

int main(void)
{
  int array[4]={2,2,2,2};
  printf("\n\n%d\n\n",ex_0025_FillArray(array, 4));
  for(int i = 0;i<4;++i)
  {
    printf("%d ",array[i]);
  }
  return 0;
}
