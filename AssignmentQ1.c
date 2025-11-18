#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function     : Diffrence
// Description  : Accept N no. from user and  Display summation of 
//                digit of each Number
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 18/11/2025
//
////////////////////////////////////////////////////////////////////////

int DigitSum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEvenSum = 0;
    int iOddSum  = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)        
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else                          
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
    return iEvenSum - iOddSum;
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

    iRet = DigitSum(ptr, iSize);

    printf("Difference is : %d\n", iRet);

    free(ptr);

    return 0;
}
////////////////////////////////////////////////////////////////////////
//
// Input : 6 Input : 85 66 3 80 93 88   Output : 53
//
////////////////////////////////////////////////////////////////////////