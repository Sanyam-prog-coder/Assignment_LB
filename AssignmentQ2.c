#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////
//
// Function     : FirstOcc
// Description  : Accept 1 No from user and accept another No from user
//                return index of first occurrence of that No
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 18/11/2025
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;     
        }
    }
    return -1;              
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the number you want to search: ");
    scanf("%d", &iValue);

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

    iRet = FirstOcc(ptr, iSize, iValue);

    printf("Output : %d\n", iRet);

    free(ptr);
    return 0;
}

//////////////////////////////////////////////////////////////////////////
//
// Input : 6    Input : 66      Input : 85 66 3 66 93 88    
// Output : 1
// Input : 6    Input : 12      Input : 85 11 3 15 11 111 
// Output : -1
//
 //////////////////////////////////////////////////////////////////////////