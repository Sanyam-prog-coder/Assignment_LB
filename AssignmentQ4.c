#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////
//
// Function     : Range
// Description  : Accept 1 No from user and accept Range, display all
//                elements from that range
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 18/11/2025
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
        {
            printf("%d ", Arr[iCnt]);
        } 
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the starting Point : ");
    scanf("%d", &iValue1);

    printf("Enter the ending Point : ");
    scanf("%d", &iValue2);

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

    printf("Output : ");
    Range(ptr, iSize, iValue1, iValue2);

    free(ptr);
    return 0;
}

//////////////////////////////////////////////////////////////////////////
//
// Input : 6    Start : 60 End : 90     Output : 85 66 76 88
//
//////////////////////////////////////////////////////////////////////////