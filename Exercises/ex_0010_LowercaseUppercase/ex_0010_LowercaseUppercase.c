// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0010_LowercaseUppercase.h"

// Function definitions
void ex_0010_LowercaseUppercase(void)
{
  int statue = 0;
    char letter = 0;
    do
    {
        printf("Type a letter: ");
        statue = scanf(" %c",&letter);
        if(statue == EOF)
        {
            return;
        }
        int c;
        do
        {
          c = getchar();
        } while (c != '\n' && c != EOF);
    }while ((statue != 1));
    
    if((letter>='A')&&(letter<='Z'))
    {
      printf("UPPERCASE\n");
    }else if((letter>='a')&&(letter<='z'))
    {
      printf("lowercase\n");
    }else
    {
      printf("The character you entered is not a letter.\n");
    }
}
