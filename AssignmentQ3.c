#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function     : Difference
// Description  : accept N no. from user and return the diffrence 
//                between largest and Smallest Number
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 18/11/2025
//
////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{
    int iCnt = 0, iMin = Arr[0], iMax = Arr[0];
    int iDiff = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iDiff = (iMax - iMin);
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
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

    iRet = Difference(ptr, iSize);

    printf("Diffrence is %d\n", iRet);

    free(ptr);

    return 0;
}
////////////////////////////////////////////////////////////////////////
//
// Input : 6    Input : 85 66 3 66 93 88    Output : 90
//
 ////////////////////////////////////////////////////////////////////////