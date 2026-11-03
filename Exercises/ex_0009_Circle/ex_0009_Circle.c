// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <math.h>
// Local includes
#include "ex_0009_Circle.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Function definitions
void ex_0009_Circle(void)
{
  // TODO: read the radius with scanf, then print pi and the circle surface
  
    double radius = 0;
    double surface = 0;

    printf("Circle radius:");
    scanf("%lf",&radius);
    printf(" pi = %.6lf\n",M_PI);
    surface = M_PI*pow(radius,2);
    printf("Circle surface = %0.2lf\n",surface);
}
