#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////
//
// Function     : Product
// Description  : Accept n Number from user and return product of all odd 
//                elements
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 18/11/2025
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iProduct = 1;
    int OddFound = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iProduct = iProduct * Arr[iCnt];
            OddFound = 1;
        }
    }
    if(OddFound == 0)
    {
        return 0;
    }
    return iProduct;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Product(ptr, iSize);

    printf("Product is %d",iRet);

    free(ptr);
    return 0;
}

//////////////////////////////////////////////////////////////////////////
//
// Input : 6    Input : 15 66 3 70 10 88    Output : 45
//
//////////////////////////////////////////////////////////////////////////