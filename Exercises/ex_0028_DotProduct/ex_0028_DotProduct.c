// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0028_DotProduct.h"

// Function definitions
// TODO: implement ex_0028_DotProduct
int ex_0028_DotProduct(int array1[],int array2[],int size)
{
    int produit=0;
    for(int i =0;i<size;++i)
    {
        produit += array1[i]*array2[i];
    }
    return produit;
}